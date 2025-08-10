#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Taking input
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    cout << "\n--- Relational Operators ---" << endl;

    cout << "a == b: " << (a == b) << endl; // Equal to
    cout << "a != b: " << (a != b) << endl; // Not equal to
    cout << "a > b : " << (a > b)  << endl; // Greater than
    cout << "a < b : " << (a < b)  << endl; // Less than
    cout << "a >= b: " << (a >= b) << endl; // Greater than or equal to
    cout << "a <= b: " << (a <= b) << endl; // Less than or equal to

    return 0;
}
