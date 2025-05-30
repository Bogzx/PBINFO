#include <iostream>
using namespace std;

int v[100001];

int partitionare(int st,int dr){
    int j=st-1;

    for(int i=st;i<dr;i++){
        if(v[i]<=v[dr])
            {
                swap(v[++j],v[i]);
            }
       
    }

    swap(v[dr],v[j+1]);

    return j+1;
}

void quicksort(int st,int dr){
    if(st<dr){
        int p=partitionare(st,dr);
        quicksort(st,p-1);
        quicksort(p+1,dr);
    }
}

int main() {

    long long n;
    cin >> n;

    for(int i=1;i<=n;i++){
        cin>>v[i];
    }
    quicksort(1,n);

    for(int i=1;i<=n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
