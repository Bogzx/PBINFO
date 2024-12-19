#include <iostream>
#include <fstream>
using namespace std;

ifstream in("cb1.in");
ofstream out("cb1.out");
int a[50001];


int howmany_smaller_or_equal_than_n(int st,int dr,int x){   //Calculam elementul cel mai mare
    int index=-1;
    int mij;
    while(st<=dr){
        mij=(st+dr)/2;
        if(a[mij]>x){
            index=mij;
            dr=mij-1;
        }   
        else    
            st=mij+1;
    }


    return mij+1;
}



int main(){
    int n;
    in>>n;
    for(int i=0;i<n;i++){
        in>>a[i];
    }
    cout<<howmany_smaller_or_equal_than_n(0,n-1,7);
    
    in.close();
    out.close();
return 0;
}