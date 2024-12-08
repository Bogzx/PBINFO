#include <iostream>

using namespace std;

/*Date de intrare
Programul citește de la tastatură numerele n C, iar apoi n numere naturale, reprezentând volumele pachetelor

Date de ieșire
Programul va afișa pe ecran numărul minim de camioane necesare M.

Restricții și precizări
1 ≤ n ≤ 1000
volumele pachetelor și capacitatea camioanelor vor fi mai mici decât 1.000.000.000*/

int main(){
    int n,c,aux,s=0,contor_camioane=1;
    cin>>n>>c;

    for(int i=0;i<n;i++){
        cin>>aux;
        s+=aux;
        if(s>c){
            contor_camioane++;
            s=aux;
        }

    }
    cout<<contor_camioane;

return 0;
}