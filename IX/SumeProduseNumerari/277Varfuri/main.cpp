#include <iostream>

using namespace std;

/*
100p
Cerinţa
Într-un şir de numere naturale se numeşte vârf un element care are doi vecini şi este strict mai mare decât aceştia.

Se dă un şir cu n elemente, numere naturale. Calculaţi suma elementelor din şir care sunt vârfuri.
*/

int suma_varf(int n){
    if(n<2)
        return 0;

    int s=0,e_stanga,e_mijloc,e_dreapta;

    cin>>e_stanga;
    cin>>e_mijloc;

    for(int i=0;i<n-2;i++){

        cin>>e_dreapta;

        if(e_mijloc>e_dreapta && e_mijloc>e_stanga){
            s+=e_mijloc;
        }

        e_stanga=e_mijloc;
        e_mijloc=e_dreapta;
    }

    return s;




}


int main(){
    int n;
    cin>>n;
    cout<<suma_varf(n);    


}