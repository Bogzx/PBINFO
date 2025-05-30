#include <iostream>

using namespace std;

int nrfacinfacotrial(long long n,long long m){
    int m_initial=m;
    int sum=0;
    while(n>=m){
        sum+=n/m;
        m*=m_initial;
    }

    return sum;

}


int main(){
    long long n;
    
    cin>>n;

    int factori_2_ramasi_=nrfacinfacotrial(n,2)-nrfacinfacotrial(n,5);

    long long fact=1;
    for(int i=1;i<=n;i++){
        long long x=i;
        while(x%2==0)
            x/=2;
        while(x%5==0)
            x/=5;

        fact=((x%10)*fact)%10;
    }
    while(factori_2_ramasi_){

        fact=(fact*2)%10;
        factori_2_ramasi_--;
    }

    cout<<fact;
return 0;
}