/*
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Topic: Pointers vs References
  Description: This program demonstrates the difference between pointers and references in C++.
  Date: 05/01/2025
*/

#include <iostream>

int main(int argc, char **argv){
  int a = 10;
  int* ptrA = nullptr;
  ptrA = &a;
  int &refA = a;
  std::cout << "a = " << a << std::endl;
  std::cout << "&a = " << &a << std::endl;
  std::cout << "ptrA = " << ptrA << std::endl;
  std::cout << "*ptrA = " << *ptrA << std::endl;
  std::cout << "&ptrA = " << &ptrA << std::endl;
  std::cout << "refA = " << refA << std::endl;
  std::cout << "&refA = " << &refA << std::endl;
  std::cout << "end" << std::endl;
  return 0;
}