/*
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Topic: References
  Description: This program demonstrates the use of references and modify valuable in C++.
  Date: 05/01/2025
*/

#include <iostream>

int main(int argc, char **argv){
  int a = 10;
  int &refA = a;
  int b = 20;
  std::cout << "a = " << a << std::endl;
  std::cout << "&a = " << &a << std::endl;
  std::cout << "refA = " << refA << std::endl;
  std::cout << "&refA = " << &refA << std::endl;
  std::cout << "Changing refA...... " << std::endl;
  refA = b;
  std::cout << "a = " << a << std::endl;
  std::cout << "refA = " << refA << std::endl;
  std::cout << "&a = " << &a << std::endl;
  std::cout << "&refA = " << &refA << std::endl;
  return 0;
}