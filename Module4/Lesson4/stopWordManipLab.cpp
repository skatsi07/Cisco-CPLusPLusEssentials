#include <string>
#include <iostream>
#include <vector>
#include <sstream>

int main()
{
    std::string stop_words;
    std::getline(std::cin, stop_words);

    std::string sentence;
    std::getline(std::cin, sentence);


    std::stringstream ss(sentence);
    std::stringstream sw(stop_words);
    std::string currWord;
    std::string prevWord;
    std::string res = "";
    std::string sw_curr = "";
    std::vector<std::string> stopList;

    //get stop words into a list
    while (std::getline(sw, sw_curr, ',')) {
        stopList.push_back(sw_curr);   
    }

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

    std::cout << sentence << "\n";
}