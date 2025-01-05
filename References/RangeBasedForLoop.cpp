/*
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Topic: Range-based for loop referecnes
  Description: This program demonstrates the use of references range-based for loop in C++.
  Date: 05/01/2025
*/

#include <iostream>

int main(int argc, char **argv){
  int arr[] = {10, 20, 30, 40, 50};
  std::cout << "Before changing......" << std::endl;
  for(int i : arr){
    std::cout << i << std::endl;
  }
  std::cout << "After changing......" << std::endl;
  for(int &i : arr){
    i *= 2;
  }
  for(int i : arr){
    std::cout << i << std::endl;
  }
  return 0;
}