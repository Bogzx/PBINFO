#include <iostream>

using namespace std;

bool isprime(int n)
{

    if(n<=1)
        return false;
    if(n==2)
        return true;

    if(n%2==0)
        return false;

    for(int d=3;d*d<=n;d+=2){
        if(n%d==0)
            return false;

    }
    return true;


}
int main(){
    long long n,nr,max=0,min=2000000000;
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>nr;
        if(isprime(nr)){
            if(nr<min)
                min=nr;
            if(nr>max)
                max=nr;
        }

    }
    cout<<min+max;
return 0;
}