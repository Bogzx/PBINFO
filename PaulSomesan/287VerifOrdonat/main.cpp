#include <iostream>

using namespace std;

bool verif(int n){
    int nr1,nr2;
    bool test=true;
    cin>>nr1;
    for(int i=1;i<n;i++){
        cin>>nr2;
        if(nr2<nr1)
            test=false;

        nr1=nr2;
    }
    return test;
}

int main(){
    int n;
    cin>>n;

    int nr;
    for(int i=0;i<n;i++){
        cin>>nr;
        cout<<verif(nr)<<" ";
    }

return 0;
}