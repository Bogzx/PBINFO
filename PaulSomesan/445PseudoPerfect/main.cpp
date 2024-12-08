#include <iostream>

using namespace std;

long long sumadiv(int n){
    long long s=0;

    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            s+=i+n/i;

            if(i*i==n)
                s-=i;
        }


    }

    return s;
}

int main(){
    int n;
    cin>>n;
    long long sum=sumadiv(n);
    int k=sum/n;
    if(k*n==sum)
        cout<<"DA";
    else cout<<"NU";
return 0;
}