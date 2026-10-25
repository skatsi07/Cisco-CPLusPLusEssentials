#include <string>
#include <iostream>
#include <sstream>

int main()
{
    std::string sentence;
    std::getline(std::cin, sentence);

    // remove successive duplicate words
    std::stringstream ss(sentence);
    std::string currWord = "";
    std::string prevWord = "";
    std::string res = "";

    // iterate through the string and remove successive duplicate words
    while (ss >> currWord) {
        if (currWord != prevWord) {
            if (prevWord != "") {
                res += " ";
            }
            res += currWord;
            prevWord = currWord;
        }
    }
    std::cout << res << "\n";
    return 0;
}