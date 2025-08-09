#include <iostream>
using namespace std;

int main() {
    int x = 5;

    cout << "Initial value of x: " << x << endl;

    // Post-increment: value used first, then incremented
    cout << "Post-increment (x++): " << x++ << endl;
    cout << "Value of x after post-increment: " << x << endl;

    // Pre-increment: value incremented first, then used
    cout << "Pre-increment (++x): " << ++x << endl;
    cout << "Value of x after pre-increment: " << x << endl;

    // Post-decrement: value used first, then decremented
    cout << "Post-decrement (x--): " << x-- << endl;
    cout << "Value of x after post-decrement: " << x << endl;

    // Pre-decrement: value decremented first, then used
    cout << "Pre-decrement (--x): " << --x << endl;
    cout << "Value of x after pre-decrement: " << x << endl;
