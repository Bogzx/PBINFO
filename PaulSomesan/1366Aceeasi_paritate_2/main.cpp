#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int nr[200000],ma,contor=n;
    for(int i=0;i<n;i++){
        cin>>nr[i];
    }
    for(int i=0;i<n;i++){
        cout<<nr[i]<<" ";
    }
    cout<<endl;
    
    bool inseram;
    do {
        inseram=false;
        for(int i=0;i<n-1;i++){
            if(abs(nr[i])%2==abs(nr[i+1])%2 && nr[i]!=nr[i+1]) {
                ma=(nr[i]+nr[i+1])/2;
                
                // Mai intai crestem n, pentru ca vom adauga un element
                n++;
                
                // Deplasam elementele la dreapta
                for(int j=n-1;j>i+1;j--){
                    nr[j]=nr[j-1];
                }
                
                nr[i+1]=ma;
                i++;
                inseram=true;
            }
        }
        if (inseram){
            for(int i=0;i<n;i++){
                cout<<nr[i]<<" ";
            }
            cout<<endl;
        }
    } while(inseram==true);

    return 0;
}
