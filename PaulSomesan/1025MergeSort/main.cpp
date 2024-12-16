#include <iostream>
using namespace std;

int sir[100001],sir2[100001];


void mergesort(int st, int dr){
    if(st<dr){
        int mij=(st+dr)/2;
        mergesort(st,mij);
        mergesort(mij+1,dr);

        int indc=1, inda=st,indb=mij+1;
        while(inda<=mij and indb<=dr){
            if(sir[inda]<=sir[indb]){
                sir2[indc++]=sir[inda++];
            }
            else{
                sir2[indc++]=sir[indb++];
            }
        }

        while(inda <=mij)
            sir2[indc++]=sir[inda++];
    
        while(indb <=dr)
            sir2[indc++]=sir[indb++];

        
        for(int i=1;i<indc;i++){
            sir[st+i-1]=sir2[i];
        }
        
        }
}



int main() {
    long long n;
    cin >> n;

    for(int i=1;i<=n;i++)
        cin>>sir[i];

    mergesort(1,n);

    for(int i=1;i<=n;i++)
        cout<<sir[i]<<" ";
    return 0;
}
