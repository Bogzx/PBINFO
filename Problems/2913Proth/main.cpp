#include <iostream>

using namespace std;

bool test(long long n){
long long power2=2;


while(power2<=n){
        if(n%power2==0)
            if((n/power2)%2!=0 && (n/power2)<power2)
                return true;
        power2*=2;
}
return false;
}
int main(){

    long long n;
    cin>>n;
    n=n-1;
    if(test(n))
        cout<<"DA";
    else cout<<"NU";


return 0;
}