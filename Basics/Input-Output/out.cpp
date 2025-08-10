#include <iostream>
using namespace std;

int main() {
    // Variables
    string name;
    int age;
    double height;

    // Taking input from the user
    cout << "Enter your name: ";
    cin >> name; // takes only one word

    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter your height in meters: ";
    cin >> height;

    // Displaying the output
    cout << "\n--- User Details ---" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " meters" << endl;

    return 0;
}
