#include <iostream>
#include <fstream>
using namespace std;

/*
Cerinţa
Se dă un fişier text care conţine mai multe linii, pe fiecare linie existând câte un şir de numere naturale nenule, despărţite prin câte un spaţiu; fiecare linie se termină cu numarul 0 (care se consideră că nu face parte din şirul aflat pe linia respectivă) şi conţine cel puţin două valori.

Se cere să se afişeze valoarea maximă din şirul care conţine cele mai puţine numere. În cazul în care există mai multe şiruri cu acelaşi număr minim de numere, se va afişa cea mai mare valoare care apare în unul dintre aceste şiruri.

Date de intrare
Fişierul de intrare maxim5.in conţine şirurile de numere, aşa cu a fost descris mai sus.

Date de ieşire
Fişierul de ieşire maxim5.out va conţine pe prima linie numărul M, reprezentând valoarea maximă din şirul care conţine cele mai puţine numere.*/

ifstream in("maxim5.in");
ofstream out("maxim5.out");




int main() {
    long long nr, max = 0, max_linie = 0, contor = 0, contor_max = 1000000;

    while (in >> nr) {
        max_linie = 0; 
        contor = 0;    

        while (nr != 0) {
            if (nr > max_linie)
                max_linie = nr; 

            contor++;    
            in >> nr;    
        }

        
        if (contor < contor_max || (contor == contor_max && max_linie > max)) {
            max = max_linie;    
            contor_max = contor; 
        }
    }

    out << max;
    in.close();
    out.close();
    return 0;
}
