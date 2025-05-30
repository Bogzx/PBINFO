#include <iostream>
#include <cmath>
using namespace std;

bool isAlipit(long long n) {
    long long temp = n, len = 0;

    while (temp) {
        len++;
        temp /= 10;
    }

    for (long long k = 1; k <= len / 2; k++) {
        if (len % k == 0) {
            long long repeated = 0, part = 0, pow10_k = 1;

            for (long long i = 0; i < k; i++) {
                part = part * 10 + (n / (long long)(pow(10, len - i - 1)) % 10);
                pow10_k *= 10;
            }

            repeated = 0;
            for (long long i = 0; i < len / k; i++) {
                repeated = repeated * pow10_k + part;
            }

            if (repeated == n) {
                return true;
            }
        }
    }

    return false;
}

int main() {
    long long n;
    cin >> n;

    if (isAlipit(n)) {
        cout << "DA";
    } else {
        cout << "NU";
    }

    return 0;
}
