/*
  Section: Dynamic Arrays Exercises (Part One)
  Title: Create Dynamics Array for Int and String
  Developed By: Haqim Maths
  Date: 2024, December 25th
*/

#include <iostream>
#include <string>
#include <typeinfo>

using string = std::string;

const int SIZE = 4;

int main(int argc, char **argv){
  int* x = new int[SIZE];
  for(size_t i = 0; i < SIZE; i++){
    x[i] = i;
  }
  string* y = new string[SIZE];
  for(size_t i = 0; i < SIZE; i++){
    y[i] = std::to_string(i);
  }
  std::cout << "Elements of dynamic int x: ";
  for(size_t i = 0; i < SIZE; i++){
    std::cout << x[i] << " ";
  }
  std::cout << std::endl;
  std::cout << "Elements of dynamic string y: ";
  for(size_t i = 0; i < SIZE; i++){
    std::cout << y[i] << " ";
  }
  delete[] x;
  delete[] y;
  std::cout << std::endl;
  return 0;
}