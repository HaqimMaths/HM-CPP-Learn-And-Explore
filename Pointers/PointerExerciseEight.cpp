/*
 Title: Find the largest element by using Dynamic Memory Allocation
 By: Haqim Maths
 Programmed on: 2024, December 19th
*/

#include <iostream>

int main(int argc, char **argv){
 std::cout << "Test Data : " << std::endl;
 unsigned int SIZE;
 std::cout << "Input total number of elements(1 to 100): ";
 std::cin >> SIZE;
 int* array = new int[SIZE];
 for(size_t i = 0; i < SIZE; i++){
  std::cout << "Number " << i + 1 << ": ";
  std::cin >> array[i];
 }
 unsigned int MAXIMUM_NUMBER = array[0];
 for(size_t i = 0; i < SIZE; i++){
  if(MAXIMUM_NUMBER < array[i]){
   MAXIMUM_NUMBER = array[i];
  }
 }
 std::cout << "The largest element is : " << MAXIMUM_NUMBER << std::endl;
 delete[] array;
 return 0;
}