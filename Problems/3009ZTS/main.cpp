#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    unsigned long long nr,result;
    int cycle[6]={1,3,2,6,4,5};
    int index=0,rest;
    for(int i=0;i<n;i++){
        cin>>nr;
        result=0;
        index=0;
        while(nr){
            rest=nr%3;
            result=(result+rest*cycle[index])%7;
            index=(index+1)%6;
            nr/=3;
        }
        cout<<result<<endl;
    }
return 0;
}