#include <iostream>

using namespace std;

unsigned long long  primdivprim(unsigned long long  n){

    for(unsigned long long  d=2;d*d<=n;d++){

        if(n%d==0)
            return d;
    }

    return n;


}


int main(){
    unsigned long long  n;
    cin>>n;
    unsigned long long  nr,sum=0;
    for(unsigned long long  i=0;i<n;i++){
        cin>>nr;
        sum+=primdivprim(nr);
    }
    cout<<sum;

return 0;
}