#include <iostream>

using namespace std;

int main(void) 
{
  int input1, input2, input3, input4;
  std:: cout << "Enter the first number: ";
  std:: cin >> input1;
  std:: cout << "Enter the second number: ";
  std:: cin >> input2;
  std:: cout << "Enter the third number: ";
  std:: cin >> input3;
  std:: cout << "Enter the fourth number: ";
  std:: cin >> input4;

  if (input1 < 1 || input1 > 255 || input2 < 1 || input2 > 255 || input3 < 1 || input3 > 255 || input4 < 1 || input4 > 255)
    {
        std::cout << "Invalid IP address" << std::endl;
    }
    else
    {
        std::cout << input1 << "." << input2 << "." << input3 << "." << input4 << std::endl;
    }
  
  return 0;
}