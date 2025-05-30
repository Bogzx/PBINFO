#include <iostream>

using namespace std;

int main(){
    int n,nr;
    cin>>n;


    for(int i=0;i<n;i++){
        cin>>nr;
        cout<<nr<<" ";
        if(nr%2==0)
            cout<<2*nr<<" ";
    }   
return 0;
}