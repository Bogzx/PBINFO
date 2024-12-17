#include <iostream>
#include <fstream>
using namespace std;

ifstream in("produse.in");
ofstream out("produse.out");

int a[1001];

int partitionare(int st,int dr){
    int j=st-1;

    for(int i=st;i<dr;i++){
        if(a[i]<a[dr]){
            swap(a[++j],a[i]);
        }
    }
    swap(a[dr],a[j+1]);
    return j+1;
}

void quicksort(int st,int dr){
    if(st<dr){
        int p=partitionare(st,dr);
        quicksort(st,p-1);
        quicksort(p+1,dr);
    }
}


bool este_in_stoc_produsul(long long nr){
    int n1,n2,pow=1,savenr=nr;
    while (nr)
    {
        pow*=10;
        nr/=10;
    }
    
    int cifra=(savenr/(pow/100))%10;

    if(cifra %2==0)
        return true;

    return false;

}

int categoria(int cod) {
    while (cod >= 10) cod /= 10;
    return cod;
}

int main() {
    long long c,n;
    in>>c>>n;

    if(c==1){
        long long nr;
        int instoc=0,farastoc=0;
        for(int i=0;i<n;i++){
            in>>nr;
            if(este_in_stoc_produsul(nr))
                instoc++;
            else farastoc++;
        }
        out<<instoc<<" "<<farastoc;

    }
    if (c == 2) {
    
        for (int i = 1; i <= n; i++)
            in >> a[i]; 

        quicksort(1, n); 

        int ultima_categorie = -1;

        
        for (int cat = 0; cat <= 9; cat++) { 
            bool prima_aparitie = true;
            for (int i = 1; i <= n; i++) {
                if (categoria(a[i]) == cat) { 
                    if (prima_aparitie) {
                        out << cat << " "; 
                        prima_aparitie = false;
                    }
                    out << a[i] << " "; 
                }
            }
            if (!prima_aparitie) out << "\n";
        }
    }


    

    in.close();
    out.close();
    return 0;
}
