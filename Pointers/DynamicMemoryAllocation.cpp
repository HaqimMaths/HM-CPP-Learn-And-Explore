/*
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Topic: Dynamic Memory Allocation
  Description: This program shows how to allocate memory dynamically using the new keyword and release (delete) memory.
  Date: 05/01/2025
*/

#include <iostream>

int main(int argc, char **argv){
  int* ptr = nullptr;
  ptr = new int;
  *ptr = 10;
  std::cout << "Value of ptr: " << *ptr << std::endl;
  delete ptr;
  ptr = nullptr;
  int* ptrTwo = nullptr;
  ptrTwo = new int(20);
  std::cout << "Value of ptrTwo: " << *ptrTwo << std::endl;
  delete ptrTwo;
  ptrTwo = nullptr;
  return 0;
}