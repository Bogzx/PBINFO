#include <iostream>
using namespace std;
/*
Cerința
Se dau n numere naturale. Pentru fiecare numar x, calculati 1+(1+2)+(1+2+3)+(1+2+3+4)+...+(1+2+3+...x).

Date de intrare
Programul citește de la tastatură numărul n, iar apoi n numere naturale, separate prin spații.

Date de ieșire
Programul va afișa pe ecran cele n sume calculate.



*/
int main() {
    unsigned long long n, temp;
    cin >> n;

    for (unsigned long long i = 0; i < n; i++) {
        cin >> temp;

        
        unsigned long long val = temp / 2;

        
        unsigned long long a = val, b = val + 1, c = 2 * val + 1;

        if (a % 3 == 0) {
            a /= 3;
        } else if (b % 3 == 0) {
            b /= 3;
        } else {
            c /= 3;
        }

        unsigned long long result = 2 * a * b * c;

        if (temp % 2 == 1) {
            result += temp * (temp + 1) / 2;
        }

        cout << result << " ";
    }

    cout << endl;
    return 0;
}
