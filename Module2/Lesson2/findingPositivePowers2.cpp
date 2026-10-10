#include <iostream>

using namespace std;

int main(void) {

    int index, power = 1;

    cout << "Enter the index: ";
    cin >> index;

    for (int i = 0; i < index; i++)
    {
        power *= 2;
    }

    cout << power << "\n";

    return 0;
}
    