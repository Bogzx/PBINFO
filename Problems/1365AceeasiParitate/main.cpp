#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long nr[100000],ma;
    for(int i=0;i<n;i++){
        cin>>nr[i];
    }
    for(int i=0;i<n-1;i++){
        if(abs(nr[i]%2)==abs(nr[i+1]%2))
            { 
                ma=(nr[i]+nr[i+1])/2;
                for(int j=n;j>=i+2;j--){
                    nr[j]=nr[j-1];  // mutam la dreapta
                }
                nr[i+1]=ma;
                i++;
                n++;
            }


    }
    for(int i=0;i<n;i++)
        cout<<nr[i]<<" ";
    

    return 0;
}
