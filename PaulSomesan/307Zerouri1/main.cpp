#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long prod=1;
    int nr_2=0;
    int nr_5=0;
    for(int i=0;i<n;i++){
        int nr;
        cin>>nr;
        while(nr%2==0){
            nr_2++;
            nr/=2;}
        
        while(nr%5==0){
            nr_5++;
            nr/=5;}

        prod=((nr%10)*prod)%10;
    }
    for(int i=0;i<nr_2-nr_5;i++){
        prod=(prod*2)%10;
    }
    cout<<prod%10;
return 0;
}