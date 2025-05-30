#include <iostream>

using namespace std;
/*
Cerința
Se dau două numere naturale n, care este putere a lui 10 și k. Să se afișeze nk.

Date de intrare
Programul citește de la tastatură numerele n și k.

Date de ieșire
Programul va afișa pe ecran numărul P, reprezentând nk.
*/


long long nr0(int n){
    int i=0;
    while(n){
        i++;
        n/=10;
    }

    return i-1;
}

int main(){
    long long n,k;
    cin>>n>>k;
    int nr=nr0(n);
    cout<<1;
    for(int i=0;i<nr*k;i++)
        cout<<0;

return 0;
}