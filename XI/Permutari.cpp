#include <iostream>
using namespace std;



void back(int n,int poz,int* sol,bool* pus){
    
    for(int i=1;i<=n;i++){
        if(pus[i]==0){
            pus[i]=1;
            sol[poz]=i;
            if(poz==n){
                for(int j=1;j<=poz;j++){
                    cout<<sol[j]<<" ";
                }
                cout<<endl;
            }
            
            back(n,poz+1,sol,pus);
            pus[poz]=0;
        }
    }

}




int main(){
    int n;
    cin>>n;
    int* sol= new int[n+1];
    bool* pus=new bool[n+1];

    for(int i=1;i<=n;i++){
        pus[i]=0;
    }

    back(n,1,sol,pus);

    delete[] sol;
    delete[] pus;
    return 0;
}