#include <iostream>
#include <string> // For string type
using namespace std;

int main() {
    // Integer types
    int age = 19;
    short int smallNum = 32767;   // Max value for short
    long int bigNum = 1000000;

    // Floating point types
    float price = 99.99f;         // Single precision
    double pi = 3.14159265359;    // Double precision

    // Character type
    char grade = 'A';

    // Boolean type
    bool isStudent = true;

    // String type
    string name = "Chandu";

    // Output values
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Short int: " << smallNum << endl;
    cout << "Long int: " << bigNum << endl;
    cout << "Price: " << price << endl;
    cout << "Value of PI: " << pi << endl;
    cout << "Grade: " << grade << endl;
    cout << "Is Student? " << isStudent << " (1 = true, 0 = false)" << endl;

    return 0;
}
