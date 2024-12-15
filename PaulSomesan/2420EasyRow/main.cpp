#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=2;i<n;++i)
    {
        sum+=n/i;    
    }
    if(n==1)
        cout << n;
    else
        cout << sum+n+1;
return 0;
}