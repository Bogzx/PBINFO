#include <iostream>

using namespace std;

/*
Cerința
Scrieți un program fabulos care citește un număr natural n și determină:

suma pătratelor cifrelor lui n
suma cifrelor impare ale lui n
suma cifrelor divizibile cu 3 ale lui n
numărul cifrelor strict mai mari decât 5
produsul cifrelor nenule ale lui n
suma dintre cifra cea mai puțin semnificativă (cifra unităților) lui n și cifra cea mai semnificativă a lui n*/

void prelucrari(long long n){
    int cifra;
    long long suma_patratelor,suma_imp,suma_div3,nr_cif_mai_mari_ca_5,produsul_cifrrelor,suma_semn_nesmen;
    int prima_cif,ultimacif;
    produsul_cifrrelor=1;
    ultimacif=n%10;
    nr_cif_mai_mari_ca_5=0;
    suma_patratelor=0;
    suma_imp=0;
    suma_div3=0;
    while(n){
        prima_cif=n%10;
        cifra=n%10;
        n/=10;
        suma_patratelor+=cifra*cifra;
        if(cifra%2==1){
            suma_imp+=cifra;
        }
        if(cifra%3==0){
            suma_div3+=cifra;
        }

        if(cifra>5){
            nr_cif_mai_mari_ca_5++;
        }

        if(cifra>0)
            produsul_cifrrelor*=cifra;

   }
    suma_semn_nesmen=prima_cif+ultimacif;

    cout<<suma_patratelor<<" "<<suma_imp<<" "<<suma_div3<<" "<<nr_cif_mai_mari_ca_5<<" "<<produsul_cifrrelor<<" "<<suma_semn_nesmen;


}



int main(){
    long long n;
    cin>>n;
    prelucrari(n);



return 0;
}