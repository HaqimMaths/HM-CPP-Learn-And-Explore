/*
 Title: Print all the elements inside an array by using a pointer
 By: Haqim Maths
 Programmed on: 2024, December 19th
*/

#include <iostream>

const int SIZE = 5;

int main(void){
 int arr[5];
 for(size_t i = 0; i < SIZE; i++){
  std::cout << "Input the number for element [" << i << "]" << std::endl;
  std::cin >> arr[i];
 }
 int* ptr;
 std::cout << "Method 1" << std::endl;
 for(size_t i = 0; i < SIZE; i++){
  ptr = &arr[i];
  std::cout << "Element [" << i << "] - " << *ptr << std::endl;
 }
 std::cout << "Method 2" << std::endl;
 ptr = arr;
 for(size_t i = 0; i < SIZE; i++){
  std::cout << "Element [" << i << "] - " << *ptr << std::endl;
  ptr++;
 }
 return 0;
}