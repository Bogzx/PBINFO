#include <iostream>

using namespace std;

long long sumdiv(long long n){
    int c=0;
    long long s=0;
    int savei;

    for(int d=2;d*d<n;d++){

        if(n%d==0){
            c++;
            s+=d;
            savei=d;
        }
        if(c==2)
            return s;

    }

    return s+n/savei;


}


int main(){
    int n;
    cin>>n;
    cout<<sumdiv(n);

return 0;
}