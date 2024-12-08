#include <iostream>
#include <fstream>
using namespace std;

ifstream in("sumagauss2.in");
ofstream out("sumagauss2.out");
/*
Cerința
Ana a calculat suma numerelor naturale mai mici sau egale cu n, iar Andreea suma numerelor naturale mai mici sau egale cu m. Doamna de mate a calculat apoi diferenţa celor două sume şi a obţinut rezultatul S.

Pentru o valoare S dată, aflaţi toate perechile (n,m), cu n>m, scriindu-le în ordine descrescătoare după n astfel încât doamna de mate să obţină rezultatul S.*/

int main() {
    long long s, s2, d2, aux, n, m;
    in >> s;
    s2 = s * 2; 

    for (long long d = 1; d * d <= s2; d++) {
        
        if (s2 % d == 0) {
            d2 = s2 / d; 

            
            if (d2 >= d) {
                aux = (d + d2 - 1);
                if (aux % 2 == 0) { 
                    n = aux / 2;
                    m = n - d;
                    if (m >= 0) { 
                        out << n << " " << m << "\n";
                    }
                }
            }
        }
    }

    in.close();
    out.close();
    return 0;
}
