#include <iostream>
#include <fstream>
using namespace std;

ifstream in("sir147.in");
ofstream out("sir147.out");

bool unupartru7(long long nr){
    long long a=1,b=4,c;
    if(nr==1 or nr==4)
        return true;
    c=b*2-a;
    while(c<=nr){

        if(c==nr)
            return true;
        
        a=b;
        b=c;
        c=b*2-a;
    }
    return false;

}


int main(){
    long long nr;

    while(in>>nr){
            if(nr%3==1)
                out<<nr<<" ";

    }


    
    in.close();
    out.close();
return 0;
}