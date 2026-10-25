#include <string>
#include <iostream>
#include <cctype>

bool chars_match(int pattern_char, int text_char)
{
  // The letter 'D' will match any decimal digit
  if (pattern_char == 'D')
  {
    return isdigit(text_char);
  }
  // The letter 'A' will match any character of the english alphabet
  if (pattern_char == 'A')
  {
    return isalpha(text_char);
  }
  // The character '?' will match every character
  if (pattern_char == '?')
  {
    return true;
  }
  // Lower-case letters in a pattern will match according letters of the English alphabet
  if (islower(pattern_char))
  {
    return pattern_char == tolower(text_char);
  }
  // Any punctuation except '?' will match exactly the same punctuation in a string
  if (ispunct(pattern_char))
  {
    return pattern_char == text_char;
  }
  return false;
}

size_t find_match(std::string const &pattern, std::string const &text, size_t start = 0)
{
  size_t match_pos = std::string::npos;

  //get pattern length
  size_t len_pattern = pattern.length();
  //check if pattern is empty or start is invalid
  if (len_pattern == 0 || start < 0)
  {
    return match_pos;
  }

  //start from the start position and go up to the end of the text
  for (size_t idx_text = start;
       match_pos == std::string::npos && idx_text + len_pattern <= text.length();
       idx_text++)
  {
    bool all_match = true;
    //check if all characters in the pattern match the text
    for (size_t idx_pattern = 0; all_match && idx_pattern < len_pattern; idx_pattern++)
    {
      all_match = chars_match(pattern[idx_pattern], text[idx_text + idx_pattern]);
    }
    if (all_match)
    {
      match_pos = idx_text;
    }
  }

  return match_pos;
}

int main()
{
    std::string pattern;
    std::getline(std::cin, pattern);

    std::string sentence;
    std::getline(std::cin, sentence);
    // match pattern against sentence

    size_t len_pattern = pattern.length();
    size_t found = find_match(pattern, sentence);
    while (found != std::string::npos)
    {
      std::cout << sentence.substr(found, len_pattern) << std::endl;
      found = find_match(pattern, sentence, found + 1);
    }

    return 0;
}