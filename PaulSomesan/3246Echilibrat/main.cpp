#include <iostream>

/*Cerința
Se dau două numere naturale a și b. Calculați suma numerelor echilibrate din intervalul [a,b]. Un număr este echilibrat dacă are număr par de cifre si are numărul de cifre pare egal cu numărul de cifre impare. De exemplu 3427 este echilibrat, iar 2333 nu este.

Date de intrare
Programul citește de la tastatură numerele a și b.

Date de ieșire
Programul va afișa pe ecran numărul s, reprezentând suma numerelor echilibrate din intervalul [a,b].

Restricții și precizări
1 ≤ a ≤ b ≤ 1.000.000*/
using namespace std;

bool nr_cif_pare_egal_imp(int n){
    int par=0,imp=0;
    while(n){
        if(n%2==0)
            par++;
        else imp++;
        n/=10;
    }
    if(par==imp)
        return true;
    else return false;
}


int main(){
    int n1,n2;
    cin>>n1>>n2;
    long long sum=0;
    for(int i=n1;i<=n2;i++){
        if(nr_cif_pare_egal_imp(i))
            sum+=i;



    }      
    cout<<sum;
return 0;
}