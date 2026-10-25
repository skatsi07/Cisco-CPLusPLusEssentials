#include <string>
#include <iostream>

int main()
{
    std::string from;
    std::getline(std::cin, from);

    std::string to;
    std::getline(std::cin, to);

    std::string sentence;
    std::getline(std::cin, sentence);

    // change all occurrences of 'from' into 'to' in the sentence
    // while loop to replace all occurrences
    size_t pos = sentence.find(from);
    while (pos != std::string::npos) {
        sentence.replace(pos, from.length(), to);
        pos = sentence.find(from, pos + to.length());
    }

    std::cout << sentence << "\n";
}