#include <iostream>
#include <fstream>
#include <string>
using namespace std;

ifstream in("egale.in");
ofstream out("egale.out");

// Function to return the number of digits of a positive long long
int nrcifre(long long n) {
    if (n == 0) return 1;
    int nr = 0;
    while (n > 0) {
        n /= 10;
        nr++;
    }
    return nr;
}

long long constructNumber(int d, int length) {
    long long result = 0;
    for (int i = 0; i < length; i++) {
        result = result * 10 + d;
    }
    return result;
}

string constructStringNumber(int d, int length) {
    return string(length, char('0' + d));
}

int main() {
    int T;
    in >> T;

    if (T == 1) {
        long long a, b;
        in >> a >> b;

        int lenA = nrcifre(a);
        int lenB = nrcifre(b);

        bool printed = false;
        for (int length = lenA; length <= lenB; length++) {
            for (int d = 1; d <= 9; d++) {
                long long num = constructNumber(d, length);
                if (num >= a && num <= b) {
                    out << num << " ";
                    printed = true;
                }
            }
        }

    } else if (T == 2) {
        int x; 
        in >> x;


        for (int length = 1; length <= x; length++) {
            for (int d = 1; d <= 9; d++) {
                out << constructStringNumber(d, length) << " ";
            }
        }
    }

    in.close();
    out.close();
    return 0;
}
