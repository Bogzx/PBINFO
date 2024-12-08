#include <iostream>

using namespace std;
/*
Cerinţa
Să se scrie un program care citește un șir de n numere naturale şi determină numărul din șir care are prima cifră minimă. Dacă există mai multe numere cu prima cifră minimă, se va determina cel mai mare dintre acestea.

Date de intrare
Programul citește de la tastatură numărul n, iar apoi n numere naturale.

Date de ieşire
Programul afișează pe ecran numărul cerut
.*/

int primacifra(int n){
    int pc=0;
    while(n)
    {
        pc=n;
        n/=10;

    }
    return pc;
}


int main(){
    int n,nr,nr_min,cif_min;
    cin>>n;
    cin>>nr;
    cif_min=primacifra(nr);
    nr_min=nr;
    for(int i=1;i<n;i++){
        cin>>nr;
        if(primacifra(nr)<cif_min){
            cif_min=primacifra(nr);
            nr_min=nr;
            }
        if(primacifra(nr)==cif_min && nr>nr_min)
            nr_min=nr;
        
    }
    cout<<nr_min;
return 0;
}
