#include <iostream>

using namespace std;

int main(void) {

    int index;
    float ans = 1;

    cout << "Enter the negative index: ";
    cin >> index;

    for (int i = 0; i < index; i++)
    {
        ans = ans / 2;
    }

    cout << ans << "\n";

    return 0;
}