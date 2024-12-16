#include <iostream>
#include <fstream>
using namespace std;

ifstream in("statisticiordine.in");
ofstream out("statisticiordine.out");
unsigned int a[4000001];

long long partitionare(long long st,long long dr){
    int j=st-1;
    swap(a[(st+dr)/2],a[dr]);
    for(int i=st;i<dr;i++){
        if(a[i]<a[dr]){
            swap(a[++j],a[i]);
        }
    }
    swap(a[j+1],a[dr]);
    return j+1;
}

long long quickSelect(long long st, long long dr, long long k) {
    while (st <= dr) {
        long long p = partitionare(st, dr);

        if (p == k) {
            out << a[p];
            return 0;
        } else if (p < k) {
            st = p + 1; // Căutăm în dreapta
        } else {
            dr = p - 1; // Căutăm în stânga
        }
    }
    return 0;
}



int main() {
    long long n,k;
    in >> n>>k;
    for(int i=1;i<=n;i++)
        in>>a[i];
    quickSelect(1,n,k);
    in.close();
    out.close();
    return 0;
}
