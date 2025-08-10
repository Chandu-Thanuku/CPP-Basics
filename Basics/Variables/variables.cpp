#include <iostream>
using namespace std;

int main() {
    // Variables (can be changed during program execution)
    int age = 19;
    double height = 1.59; // in meters
    char grade = 'A';
    string name = "Chandu";

    // Constant (cannot be changed after initialization)
    const double PI = 3.14159;
    const int YEAR = 2025;

    // Output values
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " meters" << endl;
    cout << "Grade: " << grade << endl;
    cout << "Value of PI: " << PI << endl;
    cout << "Year: " << YEAR << endl;

    // Changing variables
    age = 20;
    grade = 'B';
    cout << "\nAfter updates:" << endl;
    cout << "Age: " << age << endl;
    cout << "Grade: " << grade << endl;

    // Uncommenting the below line will cause an error because PI is constant
    // PI = 3.14;

    return 0;
}
