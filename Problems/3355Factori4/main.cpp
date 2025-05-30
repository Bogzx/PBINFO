#include <iostream>

using namespace std;

bool areunsingurfactorprim(int n){
    int d=2;
    bool once=false;
    for(d=2;d*d<=n;d++){
        if(n%d==0 && once)
            return false;
        while(n%d==0){
            n/=d;
            once=true;
        }

    }

    if(n!=1 && once)
        return false;

    return true;




}

int main(){
    int n;
    cin>>n;
    int nr;
    int min=1000000000;
    for(int i=0;i<n;i++){
        cin>>nr;
        if(areunsingurfactorprim(nr))
            if(nr<min)
                min=nr;
    }
    if(min==1000000000)
        cout<<"NU EXISTA";
    else
        cout<<min;

return 0;
}