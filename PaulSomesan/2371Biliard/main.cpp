#include <iostream>

using namespace std;

int LCM(int a,int b){
    int a1=a,b1=b;
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    
    return (a1/a)*b1;

}


int main(){
    int n,k;
    cin>>n>>k;
    int lcm1=LCM(n,k);   
    cout<<((lcm1/n)+(lcm1/k)-2);
return 0;
}