#include <iostream>
#include <string>
#include <map>
#include <cctype>

using namespace std;

int main() {
    string input;
    getline(cin, input);
    map<char, int> charCount;
    //add chars
    for (char c = 'a'; c <= 'z'; c++) {
        charCount[c] = 0;
    }

    //iterate through the string
    for(int i = 0; i < input.length(); i++) {
        //count number of each character
        if (charCount.find(input[i]) == charCount.end()) {
            charCount[input[i]] = 1;
        } else {
            charCount[input[i]]++;
        }
    }

    //check if panagram
    bool isPanagram = true;
    for(char c = 'a'; c <= 'z'; c++) {
        if (charCount[c] == 0) {
            isPanagram = false;
            break;
        }
    }
    if(isPanagram) {
        cout << "Pangram" << endl;
    } else {
        cout << "Not pangram" << endl;
    }
    
    //print char and count
    for (char c = 'a'; c <= 'z'; c++) {
        cout << c << "-" << charCount[c] << endl;
    }

    return 0;
}
