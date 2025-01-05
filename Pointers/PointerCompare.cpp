/*
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Topic: Pointer Compare
  Description: This program demonstrates pointer comparison by swapping two arrays using pointers.
  Date: 05/01/2025
*/

#include <iostream>
#include <stdbool.h>

const int SIZE = 10;

int main(int argc, char **argv){
  int scoresOfStudents[SIZE] = {100, 90, 80, 70, 60, 50, 40, 30, 20, 10};
  int* ptrOne = &scoresOfStudents[0];
  int* ptrTwo = &scoresOfStudents[SIZE - 1];
  std::cout << "Comparing pointers!" << std::boolalpha << std::endl;
  std::cout << "ptrOne < ptrTwo: " << (ptrOne < ptrTwo) << std::endl;
  std::cout << "ptrOne > ptrTwo: " << (ptrOne > ptrTwo) << std::endl;
  std::cout << "ptrOne <= ptrTwo: " << (ptrOne <= ptrTwo) << std::endl;
  std::cout << "ptrOne >= ptrTwo: " << (ptrOne >= ptrTwo) << std::endl;
  std::cout << "ptrOne == ptrTwo: " << (ptrOne == ptrTwo) << std::endl;
  std::cout << "ptrOne != ptrTwo: " << (ptrOne != ptrTwo) << std::endl;
  return 0;
}