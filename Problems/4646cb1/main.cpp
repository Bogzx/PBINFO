#include <iostream>
#include <fstream>
using namespace std;

ifstream in("cb1.in");
ofstream out("cb1.out");
int a[50001];


int cautare_binara_mic_mai_mare_sau_egal(int a[],int n,int val){
    int st=1,dr=n;
    int mij;
    int poz;
    while(st<=dr){
        mij=(st+dr)/2;
        if(val<=a[mij]){
            poz=mij;
            dr=mij-1;}
        else st=mij+1;
    }
    return poz;
}

int cautare_binara_cel_mai_mare_mai_mic_sau_egal(int a[],int n,int val){
    int st=1,dr=n;
    int mij;
    int poz;
    while(st<=dr){
        mij=(st+dr)/2;
        if(val>a[mij]){
            poz=mij;
            st=mij+1;}
        else dr=mij-1;
    }
    return n-poz+1;
}

int cautare_binara_cel_mai_mare_mai_mic_sau_egal2(int a[],int n,int val){
    int st=1,dr=n;
    int mij;
    int poz;
    while(st<=dr){
        mij=(st+dr)/2;
        if(val>=a[mij]){
            poz=mij;
            st=mij+1;}
        else dr=mij-1;
    }
    return n-poz+1;
}
int cautare_binara_prima_aparitie(int a[],int n,int val){
    int st=1,dr=n;
    int mij;
    int poz=-1;
    while(st<=dr){
        mij=(st+dr)/2;
        if(val==a[mij]){
            poz=mij;
            dr=mij-1;}
        else if(val>a[mij])
            st=mij+1;
        else dr=mij-1;
    }
    return poz;

}

int cautare_binara_ultima_aparitie(int a[],int n,int val){
    int st=1,dr=n;
    int mij;
    int poz=-1;
    while(st<=dr){
        mij=(st+dr)/2;
        if(val==a[mij]){
            poz=mij;
            st=mij+1;}
        else if(val>a[mij])
            st=mij+1;
        else dr=mij-1;
    }
    return poz;

}
int nr_aparitii(int a[],int n,int val){
    return cautare_binara_ultima_aparitie(a,n,val)-cautare_binara_prima_aparitie(a,n,val)+1;
}
int main(){
    int n;
    in>>n;
    for(int i=1;i<=n;i++){
        in>>a[i];
    }
    int linii;
    in>>linii;
    for(int i=1;i<=linii;i++){
        int c,interogare;
        in>>c>>interogare;
        if(c==1)
            out<<cautare_binara_mic_mai_mare_sau_egal(a,n,interogare)<<endl;
        if(c==2)
            out<<cautare_binara_cel_mai_mare_mai_mic_sau_egal2(a,n,interogare)<<endl;
        if(c==3)
            out<<nr_aparitii(a,n,interogare)<<endl;


    }

    in.close();
    out.close();
return 0;
}