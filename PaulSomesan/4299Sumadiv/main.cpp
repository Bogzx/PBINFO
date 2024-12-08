#include <iostream>

using namespace std;

int nrdiv(int n){
    int c=0;
    int i=1;
    for(i=1;i*i<n;i++){
        if(n%i==0)
            c+=2;
    }
    if(i*i==n)
        c++;
    return c;


}

int main(){
    int n;
    int p;
    cin>>n>>p;
    long long s=0;
    for(int i=0;i<n;i++){
        int nr;
        cin>>nr;

        if(nrdiv(nr)>=p)
            s+=nr;
    }
    cout<<s;
return 0;
}