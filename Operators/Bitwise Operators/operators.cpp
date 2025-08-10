#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Taking input
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << "\n--- Bitwise Operators ---" << endl;

    cout << "a & b  (AND)       : " << (a & b) << endl;
    cout << "a | b  (OR)        : " << (a | b) << endl;
    cout << "a ^ b  (XOR)       : " << (a ^ b) << endl;
    cout << "~a     (NOT)       : " << (~a) << endl;
    cout << "a << 1 (Left Shift): " << (a << 1) << endl;
    cout << "a >> 1 (Right Shift): " << (a >> 1) << endl;

    return 0;
}
