#include <iostream>
#include <string>
using namespace std;

int main() {
    float base;
    float side;
    float result;

    while (true) {
        cout << "Enter the value of base: ";
        cin >> base;
        cout << base << endl;

        string confirm_value;
        cout << "Is the value of base entered correct (y/n): ";
        cin >> confirm_value;
        if (confirm_value == "y") {
            break;
        }
    }

    while (true) {
        cout << "Enter the value of side: ";
        cin >> side;
        cout << side << endl;

        string confirm_side;
        cout << "Is the value of side correct (y/n): ";
        cin >> confirm_side;
        if (confirm_side == "y") {
            break;
        }
    }

    result = side * base;
    cout << "The area of square is " << result;

    return 0;
}
