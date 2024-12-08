#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long original_n = n;
    long long suma = 1;

    for (long long i = 2; i * i <= n; i++) {
        int p = 0;

        while (n % i == 0) {
            p++;
            n /= i;
        }

        if (p > 0) {
            
            suma = (suma * ((original_n * p + 1) % 59999)) % 59999;
        }
    }

    if (n > 1) {
        suma = (suma * ((original_n + 1) % 59999)) % 59999;
    }

    // Output the result
    cout << suma << endl;

    return 0;
}
