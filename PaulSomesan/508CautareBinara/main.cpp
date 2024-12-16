#include <iostream>
using namespace std;

int a[200001], b[25001];

bool cautare_binara(int st, int dr, int e) {
    while (st <= dr) {
        int mij = (st + dr) / 2;
        if (b[mij] == e)
            return true; 
        else if (b[mij] < e)
            st = mij + 1; 
        else
            dr = mij - 1; 
    }
    return false; 
}

int main() {
    long long n, m;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> b[i]; 

    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> a[i]; 

    for (int i = 0; i < m; i++) {
        cout << cautare_binara(0, n - 1, a[i]) << " ";
    }

    return 0;
}
