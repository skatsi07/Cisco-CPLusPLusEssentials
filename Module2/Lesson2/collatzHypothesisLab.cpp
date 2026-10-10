#include <iostream>

using namespace std;

int main(void) {

    int number;

    cout << "Enter the starting number: ";
    cin >> number;

    while (number > 1)
    {
        if (number % 2 == 0)
        {
            number = number / 2;
        }
        else
        {
            number = 3 * number + 1;
        }
        cout << number << "\n";
    }

    return 0;
}