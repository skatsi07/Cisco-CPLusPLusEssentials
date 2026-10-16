#include <iostream>

using namespace std;

int main(void) {

    int notes[5] = {50, 20, 10, 5, 1};

    int amount;
    cout << "Please enter the amount you wish to withdraw: ";
    cin >> amount;

    for(int i = 0; i<5; i++)
    {
        while(amount >= notes[i])
        {
            cout << notes[i] << endl;
            amount -= notes[i];
        }
    }

    return 0;

}