#include <string>
#include <iostream>

int main()
{
    std::string sentence;
    std::getline(std::cin, sentence);


    size_t found = sentence.find("  ");
    //remove extra whitespace (2 or more)
    //goes into a whitespace block and replaces all 
    //spaces with a single space once the block is found. 
    //then restarts from the new position
    while (found != std::string::npos) {

        size_t count = 1;
        while (sentence[found+count+1] == ' ') {
            count++;
        }
        sentence.replace(found, count, " ");
        found = sentence.find("  ", found+1);
    }

    std::cout << sentence << "\n";
    return 0;
}