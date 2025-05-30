#include <iostream>

using namespace std;


int main(){
    int n;
    cin>>n;
    long long sum=0,oglinda,nr;
    for(int i=0;i<n;i++){
        cin>>nr;
        oglinda=0;

        while(nr){
            oglinda*=10;
            oglinda+=nr%10;
            nr/=10;
        }
        for(int j=1;j*j<=oglinda;j++){
            if(oglinda%j==0)
                sum+=(j+oglinda/j);
            if(j*j==oglinda)
                sum-=j;
        }

        
    }
    cout<<sum;

return 0;
}