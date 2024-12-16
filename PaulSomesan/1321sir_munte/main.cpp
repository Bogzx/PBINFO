#include <iostream>
using namespace std;

bool estemunte(int n) {
    if (n < 3) return false;
    long long nr1,nr2,contor=1;
    bool urcat=false;
    cin>>nr1>>nr2;
    while(nr1<nr2 and contor<n-1){// urcam in munte si ne lasam un ultim element neverificat
        nr1=nr2;
        cin>>nr2;
        contor++;
        urcat=true;
    }
    if(!urcat)
        return false;
    if(contor == (n-1) and nr1>nr2)
        return true;

    if(contor ==(n-1) and nr1<nr2)
        return false;

    while(nr1>nr2 and contor<n-1)
    {
        nr1=nr2;
        cin>>nr2;
        contor++;
    }
    if(contor<(n-1))
        return false;
    if(contor==(n-1))
        return true;

    return true;
}

int main() {

    long long n;
    cin >> n;
    
    if(estemunte(n))
        cout<<"DA";
    else cout<<"NU";

    return 0;
}
