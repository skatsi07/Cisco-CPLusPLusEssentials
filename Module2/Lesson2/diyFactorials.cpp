#include <iostream>
using namespace std;
int main(void) { 

    int factorial;
    cout << "Enter the factorial: ";
    cin >> factorial;

    long result = 1;

    for (int i = 1; i <= factorial; i++){
        result = result * i;
    }
    
    cout << result;
}