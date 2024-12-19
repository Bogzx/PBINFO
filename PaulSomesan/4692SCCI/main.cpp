#include <iostream>

using namespace std;
long long n,sir[100001],sir2[100001],a[100001];

long long partitionare(long long st,long long dr){
    long long j=st-1;
    long long mid=(st+dr)/2;
    swap(a[mid],a[dr]);
    for(long long i=st;i<dr;i++){
        if(a[i]<a[dr])
            swap(a[i],a[++j]);
    }
    swap(a[dr],a[j+1]);
    return j+1;
}



void quicksort(long long st,long long dr){
    if(st<dr){
        long long p=partitionare(st,dr);
        quicksort(st,p-1);
        quicksort(p+1,dr);
    }
}


void mergesort(long long st, long long dr){
    if(st<dr){
        long long mij=(st+dr)/2;
        mergesort(st,mij);
        mergesort(mij+1,dr);

        long long indc=1, inda=st,indb=mij+1;
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

        
        for(long long i=1;i<indc;i++){
            sir[st+i-1]=sir2[i];
        }
        
        }
}



int main(){
    cin>>n;
    for(long long i=1;i<=n;i++)
        cin>>sir[i];
    
    mergesort(1,n);
    long long contormare=0;
    for(long long i=1;i<=n;i++)
        {
            long long contor=1;
            long long j=i;
            while(sir[j]==sir[j+1]){
                j++;
                contor++;
            }
            i=j;
            contormare+=(contor*(contor-1))/2;
        }
    cout<<contormare;
return 0;
}