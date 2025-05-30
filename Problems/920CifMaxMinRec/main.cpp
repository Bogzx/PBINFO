void cifmaxmin(int n,int &max,int &min){
    if(n<10){
        max=n%10;
        min=n%10;
    }
    else{
        cifmaxmin(n/10,max,min);
        int cifra=n%10;
        if(cifra>max)
            max=cifra;
        if(cifra<min)
            min=cifra;
    }


}

#include <iostream>
using namespace std;

int main() {
    long long n;
 
    cin >> n;
    int max,min;

    cifmaxmin(n,max,min);
    cout<<max<<" "<<min;
    return 0;
}
