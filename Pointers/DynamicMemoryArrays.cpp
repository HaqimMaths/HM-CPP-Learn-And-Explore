/*
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Topic: Dynamic Memory Arrays
  Description: This program demonstrates dynamic memory allocation of arrays using the new keyword and release (delete) memory.
  Date: 05/01/2025
*/

#include <iostream>
#include <string>

int main(int argc, char **argv){
  std::string* names = new std::string[5]{"Harish", "Ramesh", "Suresh", "Mahesh", "Rajesh"};
  unsigned int arraySize = sizeof(names[0]) / sizeof(names) + 1; // Define the size of the array
  std::cout << "Array size: " << arraySize << std::endl;
  for(size_t i = 0; i < arraySize; ++i){
    std::cout << names[i] << std::endl; // Use array indexing
  }
  if(names != nullptr){
    delete[] names;
    names = nullptr;
  }
  std::cout << "Memory released!" << std::endl;
  return 0;
}