#include <iostream>

using namespace std;

long long asociat(long long nr){
    long long asociat=0;
    long long ultima,pow=1;
    while(nr){
        ultima=nr%10;
        if(ultima%2==0){
            asociat=asociat+ultima*pow;
            pow*=10;
            }
        nr/=10;
    }

    return asociat;

}


int main(){
    int n;
    cin>>n;

    long long nr,max,maxnr;
    cin>>nr;
    maxnr=asociat(nr);
    max=nr;
    for(int i=1;i<n;i++){
        cin>>nr;
        if(asociat(nr)>maxnr){
            maxnr=asociat(nr);
            max=nr;
        }
        if(asociat(nr)==maxnr and max<nr)
            max=nr;
    }
    cout<<max;

return 0;
}