#include <iostream>

using namespace std;

int main(){
    int n,nr,aux;
    int v[18];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<n-1;i++){
        aux=v[0];

        for(int j=1;j<n;j++){
            v[j-1]=v[j];
        }
        v[n-1]=aux;

        for(int j=0;j<n;j++)
            cout<<v[j]<<" ";

        cout<<"\n";
    }


return 0;
}