#include <iostream>
/*
Cerința
Se da numarul natural n. Afisati numarul, cu prima cifra inversata cu a 2-a, a 3-a cu a 4-a, etc.

Date de intrare
Programul citește de la tastatură numărul n.

Date de ieșire
Programul va afișa numarul cu prima cifra inversata cu a 2-a, a 3-a cu a 4-a, etc.

Restricții și precizări
10 ≤ n ≤ 99.999.999
n are un numar par de cifre.*/

using namespace std;

int main(){
    int nr,nrnou=0;
    cin>>nr;
    int power=1;
    while(nr){
        int ultima=nr%10;
        nr/=10;
        int penultima=nr%10;
        nr/=10;
        nrnou+=penultima*power;
        power*=10;
        nrnou+=ultima*power;
        power*=10;
    }
    cout<<nrnou;
    
return 0;
}