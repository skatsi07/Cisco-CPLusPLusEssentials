#include <iostream>

using namespace std;

int main(void) 
{
  int input1, input2;
  std:: cout << "Enter the first number: ";
  std:: cin >> input1;
  //divide 1 by it
  float res1 = 1 / static_cast<float>(input1);


  std:: cout << "Enter the second number: ";
  std:: cin >> input2;
  //divide 1 by it
  float res2 = 1 / static_cast<float>(input2);

  //get the difference
  float diff = res1 - res2;

  if (std::abs(diff) <= 0.00001)
    std::cout << "Results are equal (by 0.000001 epsilon)" << std::endl;
  else
    std::cout << "Results are not equal (by 0.000001 epsilon)" << std::endl;
  
  return 0;
}