#include <iostream>

using namespace std;

int main(void) {

    int choice;
    float num1, num2;

    cout << "MENU: \n0 - exit\n\n1 - addition\n\n2 - subtraction\n\n3 - multiplication\n\n4 - division\n\nYour choice?";
    cin >> choice;

    switch (choice){
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 + num2 << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 - num2 << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 * num2 << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            cout << "Result: " << num1 / num2 << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
    }
}