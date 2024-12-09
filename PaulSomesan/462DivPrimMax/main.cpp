#include <iostream>

using namespace std;

int main(){
    int nr1,nr2;
    cin>>nr1;
    int contor=0,contormax=0,nrmax=0,test=0,q=1;
    while(true){
        cin>>nr2;
        int savenr=nr1;
        contor=0;
        
        for(int d=2;d*d<=nr1;d++){
            test=0;
            while(nr1%d==0)
                {
                    test=1;
                    nr1/=d;
                }
            if(test)
                contor++;
        }
        if(nr1>1)
            contor++;

        if(contor>contormax){
            contormax=contor;
            nrmax=savenr;
        }
        if(contor==contormax && savenr>nrmax)
            nrmax=savenr;
        if(savenr==nr2)
            break;
        nr1=nr2;
    }
    cout<<nrmax<<" "<<contormax;
    
return 0;
}