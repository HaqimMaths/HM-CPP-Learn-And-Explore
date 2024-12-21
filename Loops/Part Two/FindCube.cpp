/*
* Title: Loop practices Part Two
* By: Haqim Maths
* Programmed on: 2024, December 21th
*/

#include <iostream>
#include <vector>
#include <cmath>

int main(int argc, char **argv){
  unsigned int nth;
  std::cout << "Input the number of terms: ";
  std::cin >> nth;
  for(size_t i = 1; i <= nth; i++){
    std::cout << "Number is: " << i << " and the cube of " << i << " is: " << std::pow(i, 3) << std::endl;
  }
  return 0;
}