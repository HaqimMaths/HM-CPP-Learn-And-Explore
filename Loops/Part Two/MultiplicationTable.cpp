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
  std::cout << "Input the number upto: ";
  std::cin >> nth;
  std::cout << "--------------------------------------" << std::endl;
  std::cout << "Multiplication table from 1 to 5" << std::endl;
  std::cout << "--------------------------------------" << std::endl;
  for(size_t i = 1; i <= 12; i++){
    for(size_t j = 1; j <= nth; j++){
      std::cout << j << "x" << i << "=" << j * i << " ";
    }
    std::cout << std::endl;
  }
  std::cout << "--------------------------------------" << std::endl;
  return 0;
}