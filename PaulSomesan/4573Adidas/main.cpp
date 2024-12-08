#include <iostream>
using namespace std;
/*

Un număr natural se numește număr ADIDAS dacă:

are exact șase cifre;
prima cifră, a doua, a treia și ultima sunt diferite două câte două;
penultima cifră este egală cu prima;
a patra cifră este egală cu a doua.
De exemplu, numărul 459540 este număr ADIDAS, iar 459549 nu este număr ADIDAS.

Cerinţă
Se dă un șir cu n numere naturale. Să se determine cel mai mare număr ADIDAS din șir.

Date de intrare
Programul va citi de la tastatură numărul n, apoi cele n elemente ale șirului.

Date de ieşire
Programul va afișa pe ecran cel mai mare număr ADIDAS din șir sau nu exista, dacă în șir nu există un asemenea număr.

Restricţii şi precizări
n ≤ 100
elementele șirului sunt mai mici decât 109*/
// Function to count the number of digits in a number
long long nrcifre(long long n) {
    long long count = 0;
    while (n) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    long long n;
    cin >> n;
    long long maxadiads = 0;

    for (long long i = 0; i < n; i++) {
        long long nr;
        cin >> nr;
        long long savenr = nr;

        // Check if the number has exactly 6 digits
        if (nrcifre(nr) == 6) {
            // Extract digits
            long long c6 = nr % 10; nr /= 10;
            long long c5 = nr % 10; nr /= 10;
            long long c4 = nr % 10; nr /= 10;
            long long c3 = nr % 10; nr /= 10;
            long long c2 = nr % 10; nr /= 10;
            long long c1 = nr % 10; nr /= 10;

            // Check the ADIDAS conditions
            if (c1 != c2 && c1 != c3 && c1 != c6 &&
                c2 != c3 && c2 != c6 &&
                c3 != c6 &&
                c5 == c1 &&
                c4 == c2) {
                if (savenr > maxadiads) {
                    maxadiads = savenr;
                }
            }
        }
    }

    // Output the result
    if (maxadiads)
        cout << maxadiads;
    else
        cout << "nu exista";

    return 0;
}
