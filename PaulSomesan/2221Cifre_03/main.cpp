#include <iostream>

using namespace std;


/*
Cerința
Se dă un număr natural n. Să se afle câte dintre numerele obținute din n prin ștergerea unei cifre, sunt divizibile cu 3.

Date de intrare
Programul citește de la tastatură numărul n.

Date de ieșire
Programul va afișa pe ecran numărul numerelor obţinute din n prin ștergerea unei cifre, care sunt divizibile cu 3.

Restricții și precizări
1 ≤ n ≤ 2.000.000.000
dacă n are o cifră, prin ştergerea unei cifre el devine 0
dacă prin ştergerea unei cifre numărul rămas începe cu 0, zerourile de la început se elimină*/


long long suma_cif(long long n){
    long long s=0;
    while(n){
        s+=n%10;
        n/=10;
    }
    return s;
}

long long nr_div3(long long n,long long s){
    int i=0;

    while(n){
        if((s-n%10)%3==0)
            i++;
        n/=10;
    }

    return i;


}


int main(){
    long long n;
    cin>>n;
    long long s=suma_cif(n);
    cout<<nr_div3(n,s);

    


return 0;
}
