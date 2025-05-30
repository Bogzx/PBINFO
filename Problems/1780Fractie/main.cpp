#include <iostream>

using namespace std;

int main(){
    long long m,n;
    cin>>n>>m;
    // Algoritmul lul legandre
    int m_initial=m;

    int sum=0;
    while(m<=n){
        sum+=n/m;
        m*=m_initial;
        
    }
    cout<<sum;

return 0;
}