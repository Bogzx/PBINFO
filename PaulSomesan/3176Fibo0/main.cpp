#include <iostream>
#include <fstream>
using namespace std;

ifstream in("fibo0.in");
ofstream out("fibo0.out");

// long long memorizare[100]={0};

int main(){
    unsigned long long a,b,contor=3,contorperechi=0;
   // memorizare[1]=1;
  //  memorizare[2]=1;

    while(in>>a && in>>b){

        /*
        while(memorizare[b]==0)
        {
            memorizare[contor]=memorizare[contor-1]+memorizare[contor-2];
            contor++;
        }
        
    
        if(memorizare[b]%memorizare[a]==0)
            contorperechi++;
            */
        if(b%a==0)
            contorperechi++;
    }
    out<<contorperechi;
    in.close();
    out.close();
return 0;
}