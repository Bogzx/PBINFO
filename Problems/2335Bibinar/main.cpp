#include <iostream>
#include <fstream>
using namespace std;

ifstream in("bibinar.in");
ofstream out("bibinar.out");

int main(){
    long long n,nr;
    in>>n;
    long long contor0=0,contor1=0,suma=0,c;
    for(int i=0;i<n;i++){
        in>>nr;
        suma=0;
        contor0=0;
        contor1=0;
        c=nr%2;
        if(c%2==0)
            contor0++;
        else contor1++;
        nr/=2;

        while(nr){
            c=nr%2;
            if(c==0){
                suma+=contor1;
                contor0++;                
           }
            if(c==1){
                suma+=contor1*3+contor0*2;
                contor1++;
            }
            nr/=2;
        }
        out<<suma<< " ";

    }
    
    in.close();
    out.close();
return 0;
}