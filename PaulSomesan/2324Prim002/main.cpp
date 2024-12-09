#include <iostream>
using namespace std;

long long largestPrimeFactor(long long n) {
    long long largestFactor = 0;

    // Handle factor of 2
    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }

    // Handle factor of 3
    while (n % 3 == 0) {
        largestFactor = 3;
        n /= 3;
    }

    // Check for factors using increments of 6
    for (long long i = 5; i * i <= n; i += 6) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
        while (n % (i + 2) == 0) {
            largestFactor = i + 2;
            n /= (i + 2);
        }
    }

    // If n is a prime number greater than 2
    if (n > 1)
        largestFactor = n;

    return largestFactor;
}

int main() {
    long long n;
    cin >> n;

    cout << largestPrimeFactor(n) << endl;

    return 0;
}
