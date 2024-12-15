#include <iostream>
#include<algorithm>
using namespace std;
int esteproportional(int n){
    long long s1[101],s2[101];

    for(int i=0;i<n;i++)
        cin>>s1[i];
    for(int i=0;i<n;i++)
        cin>>s2[i];


    sort(s1,s1+n);
    sort(s2,s2+n);

    for(int i=0;i<n;i++){
        if(s1[0]*s2[i]!=s1[i]*s2[0])
            return false;

    }
    return true;


}
int main(){
    int n;
    cin>>n;
    if(esteproportional(n))
        cout<<"DA";
    else cout<<"NU";


return 0;
}