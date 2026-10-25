#include <string>
#include <iostream>

void replace_all(std::string &text, std::string const &from, std::string const &to)
{
  // length of the string to be replaced and the string to be replaced with
  size_t fromLen = from.length();
  size_t toLen = to.length();

  // find where the first occurence is
  size_t found = text.find(from);
  // loop until no more occurences are found
  while (found != std::string::npos)
  {
    // replace the first occurence with the new string
    text.replace(found, fromLen, to);
    // find the next occurence
    found = text.find(from, found + toLen + 1);
  }
}

int main()
{
  std::string values;
  std::getline(std::cin, values);

  std::string sentence;
  std::getline(std::cin, sentence);

  // find the position of the first comma
  size_t comma_pos = values.find(',');
  // loop until no more commas are found
  while (comma_pos != std::string::npos)
  {
    // find the position of the first equals sign
    size_t equals_pos = values.find('=');
    // if the equals sign is before the comma
    if (equals_pos < comma_pos && equals_pos != std::string::npos)
    {
      replace_all(sentence,
          "["+values.substr(0, equals_pos)+"]",
          values.substr(equals_pos+1, comma_pos - equals_pos - 1));
    }
    values.erase(0, comma_pos + 1);
    comma_pos = values.find(',');
  }
  // find the position of the last equals sign
  size_t equals_pos = values.find('=');
  size_t len_values = values.length();
  if (equals_pos < len_values && equals_pos != std::string::npos)
  {
    replace_all(sentence,
        "["+values.substr(0, equals_pos)+"]",
        values.substr(equals_pos+1, len_values - equals_pos));
  }

  std::cout << sentence << "\n";
}