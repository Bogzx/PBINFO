#include <iostream>

using namespace std;

unsigned long long  sumaputerifacotori(unsigned long long  n){
    unsigned long long  d=2;
    unsigned long long  sum=0;
    for(d=2;d*d<=n;d++){
        unsigned long long  p=0;
        while(n%d==0){
            p++;
            n/=d;
        }
        sum+=p;
    }
    if(n>1)
        sum++;
    return sum;


}

int  main(){
    unsigned long long  n,k;
    cin>>k>>n;
    unsigned long long  nr,sum=0;
    for(unsigned long long  i=0;i<n;i++){
        cin>>nr;
        if(sumaputerifacotori(nr)>=k)
            sum+=nr;
    }
    cout<<sum;


return 0;
}