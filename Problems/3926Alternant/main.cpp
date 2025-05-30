#include <iostream>
/*
Spunem că un număr natural este alternant dacă cifrele pare alternează cu cele impare. De exemplu, numere alternante sunt 236, 6, 12345678.

Cerința
Se dă un număr natural n. Să se verifice dacă este sau nu alternant.

Date de intrare
Programul citește de la tastatură numărul n.

Date de ieșire
Programul va afișa pe ecran mesajul da dacă n este alternant sau mesajul nu dacă nu este alternant.

Restricții și precizări
0 ≤ n ≤ 1.000.000.000.000.000*/
using namespace std;

bool alternant(long long n){
    int ultima,penultima;
    ultima=n%2;
    n/=10;
    while(n){
        penultima=n%2;
        if(penultima==ultima)
            return false;
        ultima=penultima;
        n/=10;
    }
    return true;
}


int main(){
    long long n;
    cin>>n;
    if(alternant(n))
        cout<<"da";
    else cout<<"nu";


return 0;
}