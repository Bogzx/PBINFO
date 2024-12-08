#include <iostream>

/*
Cerinţa
Se dau mai multe numere naturale. Determinaţi cel mai mare număr palindrom aflat printre numerele date şi de câte ori apare.

Date de intrare
Programul citește de la tastatură numere naturale, până la apariţia lui zero, care nu se ia în considerare.

Date de ieşire
Programul afișează pe ecran numerele P şi C, numărul palindrom maxim şi numărul de apariţii, separate printr-un spaţiu, sau mesajul NU EXISTA, dacă printre numerele date nu există nici un număr palindrom

Restricţii şi precizări
fiecare dintre numerele citite va avea cel mult 9 cifre;*/

using namespace std;
bool palindrom(int n){
    int n2=n;
    int nreverse=0;
    while(n)
    {
        nreverse*=10;
        nreverse+=(n%10);
        n/=10;
    }
    if(n2==nreverse)
        return true;
    else return false;


}
int main(){
    int n,max=0,nr_aparitii_max=0;
    cin>>n;
    while(n){
        if(palindrom(n))
            {
                if(n>max){
                    max=n;
                    nr_aparitii_max=0;
                }
                if(n==max)
                    nr_aparitii_max++;

            }
        cin>>n;
    }   
    if(max)
        cout<<max<<" "<<nr_aparitii_max;
    else cout<<"NU EXISTA";
return 0;
}