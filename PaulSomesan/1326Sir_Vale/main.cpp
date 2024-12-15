#include <iostream>

using namespace std;

bool estevale(int n){
    long long nr1,nr2,contor=2;
    cin>>nr1>>nr2;
    if(nr1<=nr2)
        return false;

    
    while(nr1>nr2 and contor<n){
        nr1=nr2;
        cin>>nr2;
        contor++;
    }
    if(nr1<nr2 && contor>=n)
        return true;

    while(nr2>nr1 and contor<n){
        nr1=nr2;
        cin>>nr2;
        contor++;
    }
    if(nr1<nr2 && contor>=n)
        return true;

    return false;



}


int main(){
    int n;
    cin>>n;
    bool descrescator=true;
    
    if(estevale(n))
        cout<<"DA";
        else cout<<"NU";
return 0;
}