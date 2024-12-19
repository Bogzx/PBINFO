#include <iostream>

using namespace std;
int n,a[100001];

int partitionare(int st,int dr){
    int j=st-1;
    int 
    for(int i=st;i<dr;i++){
        if(a[i]<a[dr])
            swap(a[i],a[++j]);
    }
    swap(a[dr],a[j+1]);
    return j+1;
}



void quicksort(int st,int dr){
    if(st<dr){
        int p=partitionare(st,dr);
        quicksort(st,p-1);
        quicksort(p+1,dr);
    }


}

int main(){
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];
    
    quicksort(1,n);
    int contormare=0;
    for(int i=1;i<=n;i++)
        {
            int contor=1;
            int j=i;
            while(a[j]==a[j+1]){
                j++;
                contor++;
            }
            i=j;
            contormare+=(contor*(contor-1))/2;
        }
    cout<<contormare;
return 0;
}