#include <iostream>
using namespace std;



void back(int n,int k,int poz,int* sol){
    for(int i=sol[poz-1]+1;i<=n-k+poz;++i){
        sol[poz]=i;
        if(poz==k){
            for(int j=1;j<=k;j++){
                cout<<sol[j]<<" ";
            }
            cout<<endl;
        }
        else if(poz<k){
            back(n,k,poz+1,sol);
        }
    }
}




int main(){
    int n,k;
    cin>>n>>k;
    int* sol = new int[n+1]();
    

    back(n,k,1,sol);

    delete[] sol;
    
    return 0;
}