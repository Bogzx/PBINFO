#include <iostream>

using namespace std;

int main(){
    long long n,b,c;
    cin>>n>>b>>c;

    long long n_baza_10=0;
    long long pow=1;
    while(n){
        n_baza_10+=pow*(n%10);
        pow*=b;
        n/=10;
    }

    int a[10000];
    int i=0;
    while(n_baza_10){
        a[i]=n_baza_10%c;
        n_baza_10/=c;
        i++;
    }
    i--;
    for(;i>=0;i--)
        cout<<a[i];
    
    

return 0;
}