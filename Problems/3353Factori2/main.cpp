#include <iostream>

using namespace std;

long long prodfactoriprimi(long long n){
    long long p=1;
    int i=2;
    for(i=2;i*i<=n;i++){
        if(n%i==0)
            p*=i;
        while(n%i==0)
            n/=i;

        }

    if(i*i>n)
        return p*n;

    return p;


}

int main(){
    int a,b;
    cin>>a>>b;
    long long p1=1,p2=1;
    p1=prodfactoriprimi(a);
    p2=prodfactoriprimi(b);
    if(p1>p2)
        cout<<a;
    if(p1<p2)
        cout<<b;
    if(p1==p2)
        if(a>b)
            cout<<b;
        else cout<<a;


return 0;
}