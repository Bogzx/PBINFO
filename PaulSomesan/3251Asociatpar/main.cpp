#include <iostream>
using namespace std;

// Verifică dacă un număr este palindrom
bool palindrom(long long n) {
    long long reverse = 0, saven = n;
    while (n) {
        reverse = reverse * 10 + n % 10;
        n /= 10;
    }
    return reverse == saven;
}

// Construiește numărul par asociat
long long asociat_par(long long n) {
    long long aspar = 0, power = 1;
    bool hasEvenDigit = false;  // Verifică dacă există cel puțin o cifră pară
    while (n) {
        int digit = n % 10;
        if (digit % 2 == 0) {
            aspar += digit * power;
            power *= 10;
            hasEvenDigit = true;
        }
        n /= 10;
    }

    return hasEvenDigit ? aspar : -1;  // Returnează -1 dacă nu există cifre pare
}

int main() {
    int n;
    cin >> n;

    int contor = 0;
    for (int i = 0; i < n; i++) {
        long long nr;
        cin >> nr;

        long long numar_par_asociat = asociat_par(nr);
        if(nr==0)
            contor++;
        else
            if (numar_par_asociat != -1 && palindrom(numar_par_asociat)) {
                contor++;
        }
    }

    cout << contor;
    return 0;
}
