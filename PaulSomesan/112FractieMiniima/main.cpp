#include <iostream>

using namespace std;

int GCD(int a, int b){

    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;


}

int main(){
    int n;

    cin>>n;

    int nr;
    cin>>nr;
    int min=nr,max=nr;


    for(int i=1;i<n;i++){

        cin>>nr;
        if(nr>max)
            max=nr;
        if(nr<min)
            min=nr;
    }

    int gcd=GCD(max,min);

    cout<<min/gcd<<"/"<<max/gcd; 


return 0;
}