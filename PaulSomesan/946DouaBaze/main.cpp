#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char bin[102]; // Up to 100 digits + possible added '0' + null terminator
    cin >> bin;

    int len = (int)strlen(bin);

    // If the length is odd, make it even by shifting and adding a leading '0'
    if (len % 2 != 0) {
        for (int i = len; i >= 0; i--) {
            bin[i+1] = bin[i];
        }
        bin[0] = '0';
        len++;
    }

    // Convert every two binary digits to one base-4 digit
    // We'll store the result in another character array
    char base4[101]; 
    int base4Index = 0;

    for (int i = 0; i < len; i += 2) {
        int val = (bin[i] - '0') * 2 + (bin[i+1] - '0');
        base4[base4Index++] = (char)(val + '0');
    }
    base4[base4Index] = '\0';

    // Remove leading zeros except if the number is actually zero
    int start = 0;
    while (start < base4Index - 1 && base4[start] == '0') {
        start++;
    }

    // Print the base-4 number starting from the first non-zero character
    cout << (base4 + start) << "\n";

    return 0;
}
