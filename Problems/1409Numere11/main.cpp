#include <iostream>

using namespace std;

int factorprimmax(int n){
    int d=2;
    int dmax=0;
    for(;d*d<=n;d++){
        while(n%d==0){
            dmax=d;
            n/=d;
        }
    }
    if(n>1)
        dmax=n;

    return dmax;

}


int main(){
    int n;
    cin>>n;
    long long nr,sum=0;
    for(int i=0;i<n;i++){
        cin>>nr;
        sum+=factorprimmax(nr);
    }
    cout<<sum;

return 0;
}