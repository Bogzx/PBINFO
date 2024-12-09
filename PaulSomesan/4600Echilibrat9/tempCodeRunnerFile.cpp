#include <iostream>

using namespace std;

bool echilibrat(int n) {
    long long sumpar = 0, sumimp = 0;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
        
            if (i % 2 == 0)
                sumpar++;
            else
                sumimp++;

            if (i != n / i) {
                if ((n / i) % 2 == 0)
                    sumpar++;
                else
                    sumimp++;
            }
        }
    }

    return sumimp == sumpar;
}



int main(){
    int a,b;
    cin>>a>>b;
    long long sum=0;
    for(int i=a;i<=b;i++){
        if(echilibrat(i))
            sum+=i;
    }   
    cout<<sum;
return 0;
}