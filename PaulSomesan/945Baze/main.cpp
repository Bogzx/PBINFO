#include <iostream>

using namespace std;

int main(){
    long long n,b,c;
    cin>>n>>b>>c;

    long long n_baza_10=0;
    long long pow=1;
    while(n){
        n_baza_10+=pow*n%10;

        pow*=b;


    }

    

return 0;
}