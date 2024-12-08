#include <iostream>
#include <cmath>
using namespace std;
/*
Cerinţa
La concursul “Miss & Mister Boboc” participă n perechi de elevi, despre fiecare elev cunoscându-se înălțimea. Numim grad de disproporționalitate al unei perechi diferența în valoare absolută dintre înălțimile elevilor care formează perechea.

Să se determine numărul de ordine al perechii cu grad de disproporționalitate minim.

Date de intrare
Programul citește de la tastatură numărul n, iar apoi n perechi de numere naturale, separate prin spaţii, reprezentând înălțimile elevilor dintr-o pereche.

Date de ieşire
Programul afișează pe ecran numărul de ordine al perechii cu grad de disproporționalitate minim. Dacă există mai multe perechi cu grad minim de disproporționalitate, se va afișa numărul de ordine al ultimei perechi*/
int main(){
    int n,val_1,val_2,index=0,dif_min=1000;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>val_1;
        cin>>val_2;
        int dif=abs(val_2-val_1);
        if(dif_min>=dif)
            {
                dif_min=dif;
                index=i;
            }



    }
    cout<<index;


return 0;
}