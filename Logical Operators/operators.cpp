#include <iostream>
using namespace std;

int main() {
    bool a = true;
    bool b = false;

    cout << "--- Logical Operators ---" << endl;

    // Logical AND (&&)
    cout << "a && b: " << (a && b) << endl; // true only if both are true

    // Logical OR (||)
    cout << "a || b: " << (a || b) << endl; // true if at least one is true

    // Logical NOT (!)
    cout << "!a: " << (!a) << endl; // reverses the value
    cout << "!b: " << (!b) << endl;

    // Example with numbers
    int x = 10, y = 20;
    cout << "\nExample with numbers:" << endl;
