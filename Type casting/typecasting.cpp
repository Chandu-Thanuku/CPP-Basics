#include <iostream>
using namespace std;

int main() {
    // Implicit type casting (type promotion)
    int a = 10;
    double b = a; // int automatically converted to double
    cout << "Implicit Casting (int to double): " << b << endl;

    // Explicit type casting (type conversion)
    double x = 9.78;
    int y = (int)x; // double explicitly converted to int
    cout << "Explicit Casting (double to int): " << y << endl;

    // Using static_cast for safer casting
    char ch = 'A';
    int asciiValue = static_cast<int>(ch); // char to int (ASCII)
    cout << "Character: " << ch << ", ASCII value: " << asciiValue << endl;

    // Another example: int to float
    int num1 = 5, num2 = 2;
    double result = static_cast<double>(num1) / num2; // Avoid integer division
    cout << "Division with casting: " << result << endl;

    return 0;
}
