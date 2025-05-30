#include <iostream>

using namespace std;

/*
Descompunem in facotri primi, iar nr de divizori
16=2^4
16^2=2^8
2*2*3*3
2*2*2*3*3*3

Formula este (p1+1)(p2+1)+..+(pn+1)
(p1*n+1)(p2*n+1)+..+(pn+1)

*/


long long isprim(long long n){
    if(n<=1)
        return false;
    if(n==2)
        return true;

    if(n%2==0)
        return false;

    for(int d=3;d*d<=n;d++)
        if(n%d==0)
            return false;

    return true;
}


int main(){
    long long n;
    cin>>n;
    long long nr=n;
    long long suma=1;
    for(long long i=2;i*i<=nr;i++){

        int p=0;

        while(n%i==0){
            p++;
            n/=i;
        }
        if(p){
            suma*=((((p%59999)*(nr%59999))%59999+1))%59999;
            suma=suma%59999;
        }
        

    }
    if(n!=1){
        suma=(suma*2)%59999;

    }
    if(suma==1){
       cout<<nr;
    }
    else
        cout<<suma;
return 0;}
