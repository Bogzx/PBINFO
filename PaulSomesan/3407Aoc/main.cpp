#include <iostream>
#include <fstream>
using namespace std;

ifstream in("aoc2020.in");
ofstream out("aoc2020.out");



long long LCM(long long a,long long b){
    long long prod=a*b;
    int r;
    while(b!=0){
        r=a%b;
        a=b;
        b=r;
    }

    return prod/a;

}

//a *b=GCD * LCM    LCM=a*b/GCD
int main(){
    int n;
    in>>n;
    long long nr1,nr2;
    in>>nr1;
    for(int i=1;i<n;i++){
        in>>nr2;
        nr1=LCM(nr1,nr2);
    }
    out<<nr1;
    in.close();
    out.close();
return 0;
}