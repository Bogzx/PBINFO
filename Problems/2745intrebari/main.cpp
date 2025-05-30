#include <iostream>
#include <climits>
using namespace std;

long long nrdiv(long long n){
    long long i=0;
    long long d=1;
    for(d=1;d*d<n;d++)
        if(n%d==0)
            i+=2;
    
    if(d*d==n)
        i++;

    return i;
}

long long sumacif(long long n){
    long long sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;

}

int main(){
    long long n,p,t;
    cin>>n>>t>>p;
    long long nr;
    long long min=INT_MAX,max=INT_MIN;
    long long sum=0;
    for (long long i=1;i<=n;i++){
        
        cin>>nr;
        sum+=nr;
        if(i<=p){
            if(nr<min)
                min=nr;
            if(nr>max)
                max=nr;
            }
        }

        if(t==1)
            cout<<sumacif(min);
        if(t==2)
            cout<<nrdiv(max);

        cout<<"\n"<<sum;

    


return 0;}
