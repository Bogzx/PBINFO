#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long nr[1000000],ma,contor=n;
    for(int i=0;i<n;i++){
        cin>>nr[i];
    }
    bool inseram;
    do {
        inseram=false;
    for(int i=0;i<n-1;i++){

        if(nr[i]%2==nr[i+1]%2 and nr[i]!=nr[i+1])
            {   // au aceeasi paritate
                ma=(nr[i]+nr[i+1])/2;
                for(int j=n;j>=i+2;j--){
                    nr[j]=nr[j-1];  // mutam la dreapta
                }
                nr[i+1]=ma;
                i++;
                n++;
                inseram=true;
            }


    }
    if(inseram)
        for(int i=0;i<n;i++)
            cout<<nr[i]<<" ";
    
    cout<<endl;
    }while(inseram==true);

    return 0;
}
