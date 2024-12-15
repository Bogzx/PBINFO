#include <iostream>
#include <fstream>
using namespace std;

ifstream in("input.in");
ofstream out("output.out");



int main() {
    long long n;
    in >> n;
    cout<<n<<endl;
    out << n;
    in.close();
    out.close();
    return 0;
}
