/*
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Topic: Memory Leaks
  Description: This program demonstrates memory leaks by allocating memory dynamically and not releasing it.
  Date: 05/01/2025
*/

#include <iostream>

int main(int argc, char **argv){
  int *ptr = new int(10);
  std::cout << "Value of ptr: " << *ptr << std::endl;
  ptr = new int(20); // memory leaks because you dont delete and reset it!
  std::cout << "Value of ptr: " << *ptr << std::endl;
  return 0;
}