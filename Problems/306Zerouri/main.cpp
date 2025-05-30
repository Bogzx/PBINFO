#include <iostream>
using namespace std;

unsigned long long  sumafactori(unsigned long long  n,unsigned long long  facotr){
    unsigned long long  cont=0;
    while(n%facotr==0){
        cont++;
        n/=facotr;
    }
    return cont;




}

int main(){
    unsigned long long  n;
    unsigned long long  nr;
    cin>>n;
    unsigned long long  doi=0,cinci=0;
    for(unsigned long long  i=0;i<n;i++){
        cin>>nr;

        doi+=sumafactori(nr,2);
        cinci+=sumafactori(nr,5);
    }
    if(cinci<=doi)
        cout<<cinci;
    else cout<<doi;
return 0;
}