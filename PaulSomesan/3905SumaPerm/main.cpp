#include <iostream>

using namespace std;
/*
Cerința
Scrieți un program care citește un număr natural n și care să calculeze și să afișeze suma S a tuturor numerelor obținute prin rearanjarea cifrelor lui n. Numărul n are toate cifrele distincte.

Date de intrare
Programul citește de la tastatură numărul n.

Date de ieșire
Programul va afișa pe ecran numărul S, reprezentând suma cerută.

Restricții și precizări
n are cel mult 9 cifre și are cifrele distincte.*/


long long suma_cif(long long n){
    long long s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;

}

long long nr_cif(long long n){
    long long i=0;
    while(n){
        i++;
        n/=10;
    }
    return i;

}

long long factorial(long long n){
    int fac=1;
    for(int i=1;i<=n;i++)
    {
        fac*=i;


    }
    return fac;
}

int main(){
    long long n,sumacifre,nrcifre;
    cin>>n;

    sumacifre = suma_cif(n);
    nrcifre = nr_cif(n);
    long long baza=1;
    long long sumatotala=0;
    for(long long i=0;i<nrcifre;i++){
        sumatotala+=baza*sumacifre;
        baza*=10;
    }
    cout<<sumatotala*(factorial(nrcifre-1));
return 0;
}