#include <string>
#include <iostream>
#include <sstream>
#include <map>

int main()
{
    std::string sentence;
    std::getline(std::cin, sentence);

    std::stringstream ss(sentence);
    std::string word1;
    std::string word2;
    
    //split into two words by " "
    ss >> word1 >> word2;

    //sort both word
    std::sort(word1.begin(), word1.end());
    std::sort(word2.begin(), word2.end());

    //compare
    if (word1 == word2) {
        std::cout << "Anagrams" << std::endl;
    } else {
        std::cout << "Not anagrams" << std::endl;
    }

    return 0;
}