/*
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Topic: References
  Description: This program demonstrates the use of references in C++.
  Date: 05/01/2025
*/

#include <iostream>

int main(int argc, char **argv){
  int a = 10;
  double b = 20.90;
  int &ref1 = a;
  double &ref2 = b;
  std::cout << "a = " << a << std::endl;
  std::cout << "&a = " << &a << std::endl;
  std::cout << "b = " << b << std::endl;
  std::cout << "&b = " << &b << std::endl;
  std::cout << "ref1 = " << ref1 << std::endl;
  std::cout << "&ref1 = " << &ref1 << std::endl;
  std::cout << "ref2 = " << ref2 << std::endl;
  std::cout << "&ref2 = " << &ref2 << std::endl;
  std::cout << "Changing ref1...... " << std::endl;
  ref1 = 100;
  std::cout << "a = " << a << std::endl;
  std::cout << "ref1 = " << ref1 << std::endl;
  return 0;
}