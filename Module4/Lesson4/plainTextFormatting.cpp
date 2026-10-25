#include <string>
#include <iostream>

int main()
{
    std::string sentence;
    std::getline(std::cin, sentence);

    //word has asterix in sentance make the word upper
    size_t start = sentence.find("*");
    while (start != std::string::npos) {
        size_t end = sentence.find('*', start + 1);
        
        if (end == std::string::npos) break;

        std::string innter = sentence.substr(start+1, end-start-1);
        for (int i = 0; i < innter.length(); i++) {
            innter[i] = toupper(innter[i]);
        }

        sentence.replace(start, end - start + 1, innter);
        start = sentence.find('*', start + innter.length());
    }

    //underscores surrounding create spaces between char
    start = sentence.find("_");
    while (start != std::string::npos) {
        
        size_t end = sentence.find('_', start + 1);
        if (end == std::string::npos) break;

        std::string innter = sentence.substr(start+1, end-start-1);
        std::string spaced = "";
        for (int i = 0; i < innter.length(); i++) {
            spaced += innter[i];
            if (i < innter.length() - 1) spaced += " ";
        }

        sentence.replace(start, end - start + 1, spaced);
        start = sentence.find('*', start + innter.length());
    }



    std::cout << sentence << "\n";
}