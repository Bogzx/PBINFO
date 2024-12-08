#include <iostream>

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    if(a==0 && b==0){
        cout<<-1;
    }
    else
        cout<<a;

return 0;
}