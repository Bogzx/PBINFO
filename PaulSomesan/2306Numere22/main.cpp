#include <iostream>

using namespace std;

int main(){
    int p,q,n;
    cin>>p>>q>>n;

    int nr;
    int sump=0,sumq=0;
    for(int i=0;i<n;i++){
        cin>>nr;
        int savenr=nr;
        int putere_p=0;
        int putere_q=0;
        while(nr%p==0){
            putere_p++;
            nr/=p;
        }
        nr=savenr;
        while(nr%q==0){
            putere_q++;
            nr/=q;
        }

        sump+=putere_p;
        sumq+=putere_q;
    }
    if(sump>=sumq){
        cout<<sumq;
    }
    else cout<<sump;

return 0;
}