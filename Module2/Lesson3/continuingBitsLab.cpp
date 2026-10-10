#include <iostream>

using namespace std;
int main(void) {

    //counting bits in 32 bit int
    int num;
    cout << "Enter the number: ";
    cin >> num;

    int count = 0;
    
    for (int i = 0; i < 32; i++){
        //check 0th bit if 1
        if (num & 1){
            count++;
        }
        //shift right to check next bit
        num >>= 1;
    }

    cout << count << endl;

}