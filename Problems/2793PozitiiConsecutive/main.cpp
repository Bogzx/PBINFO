#include <iostream>
#include <fstream>
using namespace std;

ifstream in("pozitiiconsecutive.in");
ofstream out("pozitiiconsecutive.out");

int main(){
    long long x,y;
    in>>x>>y;

    out<<y<<" "<<x<<" ";
    long long urmatoru;
    urmatoru=2*x-y+2;
    while(urmatoru!=3){
        out<<urmatoru<<" ";
        y=x;
        x=urmatoru;
        urmatoru=2*x-y+2;
    }
    
    out<<3<<" "<<0;

    in.close();
    out.close();
return 0;
}