#include <iostream>

using namespace std;
int vec[100001];

bool test(int n){
    int st=0,dr=n-1;

    while(st<dr){
        if(vec[st]%2!=vec[dr]%2)
            return false;
        else {
            st++;
            dr--;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>vec[i];

    if(test(n))
        cout<<"DA";
    else cout<<"NU";   
return 0;
}