#include <iostream>
using namespace std;

// Function declaration (prototype)
int add(int a, int b);

// Function definition
int add(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    // Function call
    int sum = add(num1, num2);

    cout << "Sum = " << sum << endl;

    return 0;
}
