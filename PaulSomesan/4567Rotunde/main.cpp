#include <iostream>
using namespace std;

bool valid(int nr) {
    int digits[10]; 
    int len = 0;    

    int temp = nr;
    while (temp) {
        digits[len++] = temp % 10; 
        temp /= 10;              
    }

    for (int i = 0; i < len / 2; i++) {
        swap(digits[i], digits[len - i - 1]);
    }

    int mid = len / 2;
    bool is_odd = (len % 2 != 0);

    for (int i = 0; i < mid; i++) {
        if (digits[i] != digits[mid + is_odd + i]) {
            return false; 
        }
    }

    return true; 
}

int main() {
    int n;
    cin >> n; 

    int nr, contor = 0;
    for (int i = 0; i < n; i++) {
        cin >> nr; 
        if (valid(nr)) {
            contor++; 
        }
    }

    cout << contor; 
    return 0;
}
