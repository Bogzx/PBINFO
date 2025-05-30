#include <iostream>

using namespace std;

bool alternant(int n){
    int nr1,nr2;
    cin>>nr1>>nr2;
    if(nr1==1 and nr2==1)
        return false;

    nr1=nr2;
    for(int i=2;i<n;i++){
        cin>>nr2;
        if(nr1==1 and nr2==1)
            return false;
        nr1=nr2;
    }
    
    return true;



}

int main(){
    int n;
    cin>>n;

    if(alternant(n))
        cout<<"DA";
    else cout<<"NU";
return 0;
}