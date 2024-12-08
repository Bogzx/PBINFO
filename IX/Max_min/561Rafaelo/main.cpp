#include <iostream>


using namespace std;



/*
Cerința
Cunoscând suma S de bani, numărul N de magazine și p1, p2, p3,… , pN prețul unei cutii de bomboane Rafaelo în fiecare magazin, stabiliți numărul maxim de cutii de bomboane ce poate fi cumpărat și magazinul din care pot fi cumpărate. Dacă sunt mai multe astfel de magazine se va afișa primul dintre ele în ordinea în care au fost date.

Date de intrare
Programul citește de la tastatură separate prin spații suma S, N numărul de magazine și apoi N numere naturale nenule separate prin spații, reprezentând prețul unei cutii cu bomboane Rafaelo în fiecare magazin.

Date de ieșire
Programul afișează pe ecran două numere naturale x și y, separate prin exact un spațiu, reprezentând numărul maxim de cutii cu bomboane Rafaelo ce pot fi cumpărate, respectiv magazinul din care pot fi cumpărate.*/
int main(){
    int s,n,index_min=1000,nr_min=1000,pret_magazin;
    cin>>s>>n;
    for(int i=1;i<=n;i++){
        cin>>pret_magazin;
        if(pret_magazin<nr_min){
            nr_min=pret_magazin;
            index_min=i;
        }

    }

    cout<<s/nr_min<<" "<<index_min;



return 0;
}