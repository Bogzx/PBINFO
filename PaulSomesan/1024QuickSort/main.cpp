#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int sir[100001],sir2[100001];

int partitionare(int st, int dr) {
    int pivot = sir[dr];
    int i = st - 1;
    for (int j = st; j <= dr - 1; j++) {
        if (sir[j] <= pivot) {
            i++;
            int temp = sir[i];
            sir[i] = sir[j];
            sir[j] = temp;
        }
    }
    // pune pivotul la locul lui final
    int temp = sir[i+1];
    sir[i+1] = sir[dr];
    sir[dr] = temp;
    return i+1;
}


void quicksort(int st, int dr){
    if(st<dr){
        int mij=partitionare(st,dr);
        quicksort(st,mij-1);
        quicksort(mij+1,dr);
    }
}



int main() {
    long long n;
    cin >> n;

    for(int i=1;i<=n;i++)
        cin>>sir[i];

    quicksort(1,n);

    for(int i=1;i<=n;i++)
        cout<<sir[i]<<" ";
    return 0;
}
