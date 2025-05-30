#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int maxcontor = 0, primunr = 0, ultimunr = 0;

    for (int i = a; i <= b; i++) {
        int contor = 0;

        for (int j = 1; j * j <= i; ++j) {
            if (i % j == 0) {
                if (j % 2 == 0) contor++;
                if (j != i / j && (i / j) % 2 == 0) contor++;
            }
        }

        if (contor > maxcontor) {
            maxcontor = contor;
            primunr = i;
            ultimunr = i;
        } else if (contor == maxcontor) {
            ultimunr = i;
        }
    }

    cout << maxcontor << " " << primunr << " " << ultimunr << endl;

    return 0;
}
