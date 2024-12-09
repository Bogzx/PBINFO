#include <iostream>

using namespace std;

int main(){
    int n1,n2;
    cin>>n1>>n2;
    long long s1=0,s2=0;
    int c1=n1,c2=n2;
    int d=2;
    for(;d*d<=n1;d++){
        bool verificat=false;
        while(n1%d==0){
            verificat=true;
            n1/=d;
        }

        if(verificat)
            s1+=d;
    }

    if(n1>1)
        s1+=n1;

    d=2;
    for(;d*d<=n2;d++){
        bool verificat=false;
        while(n2%d==0){
            verificat=true;
            n2/=d;
        }

        if(verificat)
            s2+=d;
    }

    if(n2>1)
        s2+=n2;

    if(s1>s2)
        cout<<c1;
    else if(s2>s1)
        cout<<c2;
    if(s1==s2)
        if(c1<c2)
            cout<<c1;
        else cout<<c2;

return 0;
}