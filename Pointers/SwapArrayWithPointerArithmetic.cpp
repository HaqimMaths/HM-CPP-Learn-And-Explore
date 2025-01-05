/*
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Topic: Swap Arrays with Pointer Arithmetic
  Description: This program demonstrates swapping two arrays using pointer arithmetic.
  Date: 05/01/2025
*/

#include <iostream>

int main(int argc, char **argv){
  int myArrayOne[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
  int myArrayTwo[] = {21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
  int* ptrMyArrayOne = myArrayOne;
  int* ptrMyArrayTwo = myArrayTwo;
  int* temp;
  std::cout << "Before swapping" << std::endl;
  for(size_t i = 0; i < std::size(myArrayOne); ++i){
    std::cout << *(ptrMyArrayOne + i) << " ";
  }
  std::cout << std::endl;
  for(size_t i = 0; i < std::size(myArrayTwo); ++i){
    std::cout << *(ptrMyArrayTwo + i) << " ";
  }
  std::cout << std::endl;
  temp = ptrMyArrayOne;
  ptrMyArrayOne = ptrMyArrayTwo;
  ptrMyArrayTwo = temp;
  std::cout << "After swapping" << std::endl;
  for(size_t i = 0; i < std::size(myArrayOne); ++i){
    std::cout << *(ptrMyArrayOne + i) << " ";
  }
  std::cout << std::endl;
  for(size_t i = 0; i < std::size(myArrayTwo); ++i){
    std::cout << *(ptrMyArrayTwo + i) << " ";
  }
  return 0;
}