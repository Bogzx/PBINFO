#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream in("interclasare1.in");
    ofstream out("interclasare1.out");

    int n, m;
    in >> n; // Read size of the first array

    int a, b; // Variables to store the current values of the two arrays

    // Read the first element of the first array
    in >> a;
    int inda = 1; // Index for the first array

    // Skip the rest of the first array to position `in` at the start of the second array
    for (int i = 1; i < n; i++) {
        int temp;
        in >> temp;
    }

    // Read size of the second array
    in >> m;

    // Read the first element of the second array
    in >> b;
    int indb = 1; // Index for the second array

    int last_written = -1; // Keeps track of the last written number to avoid duplicates
    int indc = 0;          // Counter for merged elements (to format output)

    // Merge logic
    while (inda <= n && indb <= m) {
        if (a < b) {
            if (a != last_written) { // Only write if `a` is not a duplicate
                out << a << " ";
                last_written = a;
                indc++;
            }
            inda++;
            if (inda <= n) {
                in >> a; // Read next element of the first array
            }
        } else if (b < a) {
            if (b != last_written) { // Only write if `b` is not a duplicate
                out << b << " ";
                last_written = b;
                indc++;
            }
            indb++;
            if (indb <= m) {
                in >> b; // Read next element of the second array
            }
        } else { // a == b
            if (a != last_written) { // Only write one of the duplicates
                out << a << " ";
                last_written = a;
                indc++;
            }
            inda++;
            indb++;
            if (inda <= n) {
                in >> a;
            }
            if (indb <= m) {
                in >> b;
            }
        }

        // Add a newline after every 10 numbers
        if (indc % 10 == 0) {
            out << "\n";
        }
    }

    // Process remaining elements of the first array
    while (inda <= n) {
        if (a != last_written) { // Only write if `a` is not a duplicate
            out << a << " ";
            last_written = a;
            indc++;
        }
        inda++;
        if (inda <= n) {
            in >> a; // Read next element of the first array
        }

        if (indc % 10 == 0) {
            out << "\n";
        }
    }

    // Process remaining elements of the second array
    while (indb <= m) {
        if (b != last_written) { // Only write if `b` is not a duplicate
            out << b << " ";
            last_written = b;
            indc++;
        }
        indb++;
        if (indb <= m) {
            in >> b; // Read next element of the second array
        }

        if (indc % 10 == 0) {
            out << "\n";
        }
    }

    in.close();
    out.close();
    return 0;
}
