#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int baza=0,pmax=0;
    for(int i=2;i*i<=n;i++){
        int p=0;
        while(n%i==0){
            p++;
            n/=i;
        }
        if(p>pmax){
            pmax=p;
            baza=i;
        }
        if(p==pmax){
            if(i>baza)
                baza=i;
        }
    }
    if((pmax==0 ||pmax==1) && n>baza)
        baza=n;

    cout<<baza;


return 0;
}