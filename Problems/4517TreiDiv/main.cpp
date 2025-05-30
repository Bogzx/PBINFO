#include <iostream>
#include <cmath>
using namespace std;

int isprime(int n){
    if(n<2)
        return false;

    if(n==2)
        return true;

    if(n%2==0)
        return false;

    int d=3;
    for(d=3;d*d<=n;d+=2)
        if(n%d==0)
            return false;
    
    return true;
}


int main(){
    long long a;
    cin>>a;
    int contor=0;
    long long i,d;
    for(int i=0;i<a;i++){
        long long nr;
        cin>>nr;
        long long sqrt_a=sqrt(nr);
        if(sqrt_a*sqrt_a==nr)
            if(isprime(sqrt_a))
                contor++;

    }
    
    cout<<contor;
return 0;
}