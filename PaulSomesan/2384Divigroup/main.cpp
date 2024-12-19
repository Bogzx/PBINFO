#include <bits/stdc++.h>
using namespace std;
ifstream in("divigrup.in");
ofstream out("divigrup.out");
int f[400];
int nrdiv(int n)
{
    int d = 2 , prod = 1;
    while(n > 1)
    {
        int p = 0;
        while(n % d == 0) p++ , n/=d;
        if(p) prod *= (p+1);
        d++;
        if(d * d > n) d = n;
    }
    return prod;
}
int main()
{
    int n , c = 0 , a[300] , v[300];
    in >> n;
    for(int i = 0 ; i < n ; ++i)
        in >> a[i];
    for(int i = 0 ; i < n ; i++)
        for(int j = i + 1 ; j < n ; j++)
            if(a[i] > a[j]) swap(a[i] , a[j]);
    for(int i = 0 ; i < n ; ++i)
    {
        v[i]=nrdiv(a[i]);
        if(f[v[i]]==0) c++;
        f[v[i]]++;
    }
    out << c << '\n';
    for(int i = 300 ; i >= 1 ; --i)
    {
        int cnt = 0;
        for(int j = 0 ; j < n ; ++j)
            if(v[j]==i) cnt++;
        if(cnt  > 0)
        {
            out << cnt << ' ';
            for(int j = 0 ; j < n ; ++j)
                if(v[j]==i)
                    out << a[j] << ' ';
            out << '\n';
        }
    }
    return 0;
}