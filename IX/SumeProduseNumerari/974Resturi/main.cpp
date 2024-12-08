#include <iostream>

using namespace std;
/*
Cerința
Se dau n și k numere naturale. Calculați suma resturilor împărțirii tuturor numerelor naturale de la 1 la n prin numărul k.

*/
long long gauss(long long n){
    if(n%2==0)
        return (n/2)*(n+1);
    return (((n+1)/2)*n);


}

int main(){
    long long n,k,g,s,modulo;
    cin>>n>>k;
    g=gauss(k-1);
    s=(n/k)*g;
    modulo=n%k;
    s+=gauss(modulo);
    cout<<s;
}