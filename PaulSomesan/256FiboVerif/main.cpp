#include <iostream>

using namespace std;

bool fibo(long long nr){
    long long a=1,b=0,c=0;

    while(c<nr){
        c=a+b;
        b=a;
        a=c;

        if(nr==c)
            return true;
    

    }
    
    return false;

}

int main(){
    int n;
    long long nr;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>nr;
        if(fibo(nr) or nr==0)
            cout<<"DA"<<"\n";
        else cout<<"NU"<<endl;



    }   
return 0;
}