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

bool aproapeprim(long long n){
    if(n%2==0 && isprim(n/2))
        return true;

    for (int d=3;d*d<n;d+=2){
        if(n%d==0)
            if(isprim(d)&& isprim((n/d)))
                return true;
    }
    return false;
}

int main(){

    int n;
    cin>>n;
    if(aproapeprim(n))
        cout<<"DA";
    else cout<<"NU";
return 0;
}