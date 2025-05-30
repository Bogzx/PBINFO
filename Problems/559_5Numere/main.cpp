#include <iostream>

/*
Cerința
Se dau 5 numere distincte. Să se determine suma celor mai mari 3 dintre ele.

Date de intrare
Programul citește de la tastatură 5 numere naturale.

Date de ieșire
Programul va afișa pe ecran numărul cerut.

Restricții și precizări
cele 5 numere naturale sunt distincte, cuprinse între 1 și 10000, inclusiv*/

using namespace std;

int main(){
    int n1,n2,n3,n4,n5;
    cin>>n1>>n2>>n3>>n4>>n5;
    int v[5];
    v[0]=n1;v[1]=n2;v[2]=n3;v[3]=n4;v[4]=n5;
    int max1=0,max2=0,max3=0,index;
    for(int i=0;i<5;i++){
        if(max1<v[i]){
            max1=v[i];
            index=i;}
    }
    v[index]=0;
    for(int i=0;i<5;i++){
        if(max2<v[i]){
            max2=v[i];
            index=i;}
    }
    v[index]=0;
    for(int i=0;i<5;i++){
        if(max3<v[i]){
            max3=v[i];
            index=i;}
    }
    cout<<max1+max2+max3;

return 0;
}