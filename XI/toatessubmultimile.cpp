#include <iostream>
using namespace std;



void back(int n,int poz,int* sol){
    for(int i=sol[poz-1]+1;i<=n;++i){
        sol[poz]=i;
    
        for(int j=1;j<=poz;j++){
            cout<<sol[j]<<" ";
        }
        cout<<endl;
    
        
        back(n,poz+1,sol);
        
    }
}




int main(){
    int n;
    cin>>n;
    int* sol = new int[n+1]();
    

    back(n,1,sol);

    delete[] sol;
    
    return 0;
}