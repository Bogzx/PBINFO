#include <iostream>

using namespace std;

int main(){
    long long n;
    cin>>n;

    long long k=0,contor=1;
    while(k<n){
        k+=contor;
        contor++;
    }
    cout<<k-n+1;

return 0;
}