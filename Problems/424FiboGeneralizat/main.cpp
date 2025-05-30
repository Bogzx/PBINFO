#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long long a,b,n,c;
    cin>>a>>b>>n;

    if(abs(a)<n)
        cout<<a<<" ";
    if(abs(b)<n)
        cout<<b<<" ";

    c=a+b;
    while(abs(c)<n){
        a=b;
        b=c;
        cout<<c<<" ";
        c=a+b;
    }

    
    
return 0;
}