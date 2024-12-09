#include <iostream>

using namespace std;

unsigned long long  LCM(unsigned long long  a,unsigned long long  b){
    unsigned long long  a1=a,b1=b;

    while(b!=0){
        unsigned long long  r=a%b;
        a=b;
        b=r;
    }
    return (a1/a)*b1;

}


int main(){
    unsigned long long  a;
    cin>>a;
    unsigned long long  d1=4*(a-1),d2=4*(a-3),d3=4*(a-5);

    unsigned long long  lcm=LCM(LCM(d1,d2),d3);
    cout<<lcm/d1<<" "<<lcm/d2<<" "<<lcm/d3;
return 0;
}