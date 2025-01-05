/*
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Topic: Merge Arrays
  Description: This program demonstrates merging two arrays into a single array.
  Date: 05/01/2025
*/

#include <iostream>

int main(int argc, char **argv){
  int arrOne[] = {1, 2, 3, 4, 5};
  int arrTwo[] = {6, 7, 8, 9, 10};
  int* ptrArr = new int[10]{*arrOne, *arrTwo};
  for(size_t i = 0; i < sizeof(arrOne) / sizeof(arrOne[0]); ++i){
    *(ptrArr + i) = arrOne[i];
  }
  for(size_t i = 0; i < sizeof(arrTwo) / sizeof(arrTwo[0]); ++i){
    *(ptrArr + i + sizeof(arrOne) / sizeof(arrOne[0])) = arrTwo[i];
  }
  for(size_t i = 0; i < 10; ++i){
    std::cout << *(ptrArr + i) << " ";
  }
  delete[] ptrArr;
  return 0;
}