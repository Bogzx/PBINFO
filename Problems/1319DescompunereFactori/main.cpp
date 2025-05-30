#include <iostream>

using namespace std;

int main(){
    long long n;
    cin>>n;
    int d=2;

    for(;d*d<=n;d++){
        while(n%d==0)
            {
                cout<<d<<" ";
                n/=d;
            }
    }
    if(n>1)
        cout<<n;

return 0;
}