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
    long long a,b;
    cin>>a>>b;
    int contor_divizori=0,contor=0;
    long long i,d;
    int sqrt_a=sqrt(a);
    int sqrt_b=sqrt(b);
    if(sqrt(a)!=floor(sqrt_a))   sqrt_a+=1;
    
    for(i=sqrt_a;i<=sqrt_b;i++){
        contor_divizori=0;
        if(isprime(i)){
                contor++;
                
        }
    }
    cout<<contor;
return 0;
}