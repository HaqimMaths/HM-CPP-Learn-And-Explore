/*
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Topic: Pointer Arithmetic
  Description: This program demonstrates pointer arithmetic by swapping two arrays using pointers.
  Date: 05/01/2025
*/

#include <iostream>

int main(int argc, char **argv){
  int luckyNumbers[] = {1,2,3,4,5,6,7,8,9,10};
  int* ptrLuckyNumbers = luckyNumbers;
  std::cout << "Nineth element: " << *(ptrLuckyNumbers + 9) << std::endl;
  std::cout << "Zeroth element: " << *(ptrLuckyNumbers) << std::endl;
  ptrLuckyNumbers++;
  std::cout << "First element: " << *(ptrLuckyNumbers) << std::endl;
  ptrLuckyNumbers++;
  std::cout << "Second element: " << *(ptrLuckyNumbers) << std::endl;
  std::cout << "Using for loop: " << std::endl;
  ptrLuckyNumbers = luckyNumbers;
  for(size_t i = 0; i < std::size(luckyNumbers); ++i){
    std::cout << i << std::endl;
    std::cout << *(ptrLuckyNumbers + i) << " ";
  }
  return 0;
}