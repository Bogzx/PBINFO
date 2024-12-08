#include <iostream>

using namespace std;
bool isprim(long long n){
    if (n<=1)
        return false;

    if (n==2)
        return true;
    if (n%2==0)
        return false;

    for(int d=3;d*d<=n;d+=2){
        if(n%d==0)
            return false;
    } 
    return true;

}
int main(){
    int n;
    cin>>n;
    long long s=0;
    for(int i=1;i*i<=n;i++){
        if(n%i==0)
            {
                if(!isprim(i))
                    s+=i;
                if(!isprim(n/i))
                    s+=n/i;
            }
        if(i*i==n && !isprim(i))
            s-=i;
    }
    cout<<s;

return 0;
}