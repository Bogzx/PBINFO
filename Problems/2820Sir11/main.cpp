#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("sir11.in");
    ofstream out("sir11.out");

    long long n;
    in >> n;

    
    if (n == 1) {
        out << 1;  
        return 0;
    }
    if (n == 2) {
        out << -1 << " " << 1; 
        return 0;
    }

    
    long long nr1 = 1; 
    long long nr2 = -1;  
    long long nr3;
    long long contor = 3; 

  
    while (contor <= n) {
        
        nr3 = 1 - 2*nr2 - nr1; 
       
        nr1 = nr2; 
        nr2 = nr3; 
        contor++;
    }

    
    out << nr2 << " " << nr1 << " ";

  
    long long remaining = n - 2; 

    while (remaining > 0) {
        nr3 = 1 - 2*nr1 - nr2;  
        out << nr3 << " ";
     
        nr2 = nr1;  
        nr1 = nr3;
        remaining--;
    }

    in.close();
    out.close();
    return 0;
}
