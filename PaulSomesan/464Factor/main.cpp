#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int nr,factor,factormaxim=0,power,powermax=0;
    for(int i=0;i<n;i++){
        cin>>nr;
        int savenr=nr;
        int p=0;
        int d=2;
        for(d=2;d*d<=nr;d++){
            p=0;
            while(nr%d==0){
                factor=d;
                p++;
                nr/=d;
            }
        }
        if(nr>1){
            factor=nr;
            p=1;
            
            }

        if(factor==factormaxim)
            powermax+=p;

        if(factor>factormaxim){
            factormaxim=factor;
            powermax=p;
        }
        


    }
    cout<<factormaxim<<" "<<powermax;


return 0;
}