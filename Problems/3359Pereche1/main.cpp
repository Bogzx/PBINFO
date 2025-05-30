#include <iostream>

using namespace std;

bool samefactors(long long a, long long b){
    if(a==b)
        return true;
    if(a<b)
        {
            int aux=a;
            a=b;
            b=aux;
        }
        
    for(int i=2;i*i<=a;i++){
        bool aintrat=false;
        bool bintrat=false;
        while(a%i==0){
            aintrat=true;
            a/=i;
        }
        while(b%i==0){
            bintrat=true;
            b/=i;
        }
        if(aintrat!=bintrat)
            return false;

    }
    return ((a==1 && b==1) || a==b);
}


int main(){
    int n;
    cin>>n;
    int nr1,nr2;
    cin>>nr1;
    int a=0,b=0;
    for(int i=1;i<n;i++){
        cin>>nr2;
        if(samefactors(nr1,nr2)){
            if((nr1+nr2)>(a+b)){
                a=nr1;
                b=nr2;
            }
        }

        nr1=nr2;


    }
    if(a==b && a==0){
        cout<<"NU EXISTA";
    }
    else
        cout<<a<<" "<<b;
return 0;
}