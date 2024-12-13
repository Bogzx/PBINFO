#include <iostream>

using namespace std;

int main(){
    unsigned long long b,n,p;
    cin>>b>>n>>p;

    unsigned long long zecelap=1;
    while(p){
        zecelap*=10;
        p--;
    }
    unsigned long long nr=1;

    while(n){

        if(n%2==0){
            b=(b%zecelap*b%zecelap)%zecelap;
            n/=2;
        }
        if(n%2==1){
            nr=(nr*b)%zecelap;
            n-=1;
        }
    }

    
    cout<<nr;
return 0;
}