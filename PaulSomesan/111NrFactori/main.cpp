#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    unsigned long long contor=0,nr,nrmaxfactori=0,savenr,nrmax;
    
    for(int i=0;i<n;i++){
        int d=2;
        cin>>nr;
        savenr=nr;
        contor=0;
        for(;d*d<=nr;d++){
            bool arefactor=false;
            while(nr%d==0){
                arefactor=true;
                nr/=d;
            }
            if(arefactor)
                contor++;
        }
        if(nr>1)
            contor++;
        
        if(contor==nrmaxfactori)
            if(nrmax>savenr)
                nrmax=savenr;
        if(contor>nrmaxfactori)
            {
                nrmaxfactori=contor;
                nrmax=savenr;
            }
        
    }
    cout<<nrmax;
return 0;
}