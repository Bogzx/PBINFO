#include <iostream>
#include <fstream>
using namespace std;

ifstream in("pozmax.in");
ofstream out("pozmax.out");

int main(){
    int n,poz_min=0,poz_max=0,nr_max=0;
    float nr;
    in>>n;
    for(int i=1;i<=n;i++){
        in>>nr;
        if(nr>nr_max){
            nr_max=nr;
            poz_min=i;
            poz_max=i;
        }
        if(nr==nr_max){
            poz_max=i;
        }
    }
    out<<poz_min<<" "<<poz_max;
    in.close();
    out.close();
return 0;
}