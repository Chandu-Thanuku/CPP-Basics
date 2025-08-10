#include <iostream>
using namespace std;

int main() {
    int a, b;

    // Taking input
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    // Using ternary operator to find the greater number
    int maxNum = (a > b) ? a : b;
    cout << "\nGreater number is: " << maxNum << endl;

    // Example with even/odd check
    cout << a << " is " << ((a % 2 == 0) ? "Even" : "Odd") << endl;
    cout << b << " is " << ((b % 2 == 0) ? "Even" : "Odd") << endl;

    return 0;
}
