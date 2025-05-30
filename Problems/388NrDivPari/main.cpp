#include <iostream>

using namespace std;

int nrdivpari(int n){
    int c=0;
    for(int i=1;i*i<=n;i++){

        if(n%i==0){

            if(i%2==0)
                c++;
            if(n/i%2==0)
                c++;

            if(i*i==n&& i%2==0)
                c--;

        }



    }

    return c;


}

int main(){
    int n;
    cin>>n;
    cout<<nrdivpari(n);
return 0;
}