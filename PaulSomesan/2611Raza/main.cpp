#include <iostream>

using namespace std;

long long gcd(long long a,long long b){

    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
//a*b=gcd * lcm  lcm=a*b/gcd
long long lcm(long long a, long long b){
    
    return (a/gcd(a,b))*b;
}



int main(){
    long long a,b;
    cin>>a>>b;

    cout<<((lcm(a,b)/a -1)+lcm(a,b)/b -1);


return 0;
}