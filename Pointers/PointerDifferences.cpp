/*
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Topic: Pointer Differences
  Description: This program demonstrates pointer differences by swapping two arrays using pointers.
  Date: 05/01/2025
*/

#include <iostream>

int main(int argc, char **argv){
  int arrOne[] = {1, 2, 3, 4, 5};
  int* ptrOne = arrOne;
  int* ptrTwo = arrOne + 4;
  std::cout << "ptrOne - ptrTwo: " << ptrOne - ptrTwo << std::endl;
  std::cout << "ptrTwo - ptrOne: " << ptrTwo - ptrOne << std::endl;
  std::ptrdiff_t pos_diff = ptrTwo - ptrOne;
  std::ptrdiff_t neg_diff = ptrOne - ptrTwo;
  std::cout << "Positive difference: " << pos_diff << std::endl;
  std::cout << "Negative difference: " << neg_diff << std::endl;
  return 0;
}