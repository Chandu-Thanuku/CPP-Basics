#include <iostream>
using namespace std;

int main() {
    int i = 1;
    cout << "Do-While loop: Print numbers 1 to 5" << endl;
    do {
        cout << i << " ";
        i++;
    } while (i <= 5);
    cout << endl;
    return 0;
}
