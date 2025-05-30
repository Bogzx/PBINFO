#include <iostream>

using namespace std;

void afisare(int a[],int n){
    for(int i=1;i<=n;++i){
        cout<<a[i]<<" ";
    }
}

bool cautare_binara_clasica(int a[],int n,int val){
    int st=1,dr=n;
    while(st<=dr){
        int mij=(st+dr)/2;
        if(val==a[mij])
            return true;

        else if (val<a[mij]){
            dr=mij-1;
        }
        else st=mij+1;
    }
    return false;
}

int cautare_pozitie_element(int a[],int n,int val){
    int st=1,dr=n;
    while(st<=dr){
        int mij=(st+dr)/2;
        if(val==a[mij])
            return mij;
        else if(val<a[mij])
            dr=mij-1;
        else st=mij+1;
    }
    return -1;
}

// Determinarea celui mai mic element mai mare sau egal cu o valoare dintr-un sir

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

//Cel mai mare elements mai mic sau egal cu o valoare din sir

int cautare_binara_cel_mai_mare_mai_mic_sau_egal(int a[],int n,int val){
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
    return poz;
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

int a[100],n=10;
a[1]=1;a[2]=5;a[3]=6;a[4]=6;a[5]=9;a[6]=22;a[7]=24;a[8]=24;a[9]=27;a[10]=30;
afisare(a,n);cout<<endl;
cout<<nr_aparitii(a,n,24);
return 0;
}