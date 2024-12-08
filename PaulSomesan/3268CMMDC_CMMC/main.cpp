#include <iostream>

using namespace std;

long long CMMDC(long long a,long long b){

    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;

}
//a*b=GCD * LCM

int main(){
    long long a,b;
    cin>>a>>b;

    cout<<CMMDC(a,b)<<" "<<((a*b)/CMMDC(a,b));


return 0;
}