#include <iostream>
#include <fstream>
using namespace std;

ifstream in("arhitectura2.in");
ofstream out("arhitectura2.out");

int vec[2000005], a[100001], b[2000005];

int main() {
    int n;
    in >> n;

    int maxHeight = 0;

    // Citirea vectorului și actualizarea tabelului de frecvențe
    for (int i = 1; i <= n; i++) {
        in >> vec[i];
        a[vec[i]]++;
        if (vec[i] > maxHeight) {
            maxHeight = vec[i];
        }
    }

    int j = 1;

    // Construirea vectorului b în ordine crescătoare din frecvențe
    for (int i = 1; i <= maxHeight; i++) {
        while (a[i] > 0) {
            b[j++] = i;
            a[i]--;
        }
    }

    // Afișare în ordine descrescătoare
    for (int k = j - 1; k >= 1; k--) {
        out << b[k] << " ";
    }
    out << "\n";

    // Verificare medii aritmetice
    for (int k = j - 1; k >= 1; k--) {
        int left = (k == j - 1) ? 0 : b[k + 1];
        int right = (k == 1) ? 0 : b[k - 1];
        if (b[k] * 2 == left + right) {
            out << 1 << " ";
        } else {
            out << 0 << " ";
        }
    }

    in.close();
    out.close();
    return 0;
}
