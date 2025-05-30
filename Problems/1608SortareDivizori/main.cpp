#include <iostream>
#include <fstream>
using namespace std;

ifstream in("sortare_divizori.in");
ofstream out("sortare_divizori.out");
int v[1001],v2[1001];

int nrdivizori(int n){
    
    int p=0;
    int nrdiv;

    while(n%2==0){
        p++;
        n/=2;
    }
    nrdiv=(p+1);

    for(int d=3;d*d<=n;d++){
        p=0;
        while(n%d==0){
            p++;
            n/=d;
        }
        if(p>0)
            nrdiv*=(p+1);
    }
    if(n!=1)
        nrdiv*=2;

    return nrdiv;

}

int main(){
    int n;
    in>>n;
    for(int i=0;i<n;i++){
        in>>v[i];
        v2[i]=nrdivizori(v[i]);}


    bool sortat=false;
    while(!sortat){
        sortat=true;

        for(int i=0;i<n-1;i++){
            if(v2[i]<v2[i+1])
                {
                    sortat=false;
                    swap(v[i],v[i+1]);
                    swap(v2[i],v2[i+1]);
                }
            if(v2[i]==v2[i+1] and v[i]>v[i+1])   
                {
                    sortat=false;
                    swap(v[i],v[i+1]);
                    swap(v2[i],v2[i+1]);
                }
        }
    }
    for(int i=0;i<n;i++)
        out<<v[i]<<" ";

    in.close();
    out.close();
return 0;
}