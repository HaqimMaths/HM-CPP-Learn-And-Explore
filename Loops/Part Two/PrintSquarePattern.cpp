/*
* Title: Loop practices Part Two
* By: Haqim Maths
* Programmed on: 2024, December 21th
*/

#include <iostream>
#include <vector>
#include <cmath>

int main(int argc, char **argv){
  unsigned int NUMBER_OF_CHARACTERS;
  std::cout << "Input the number of '#' characters for a side: ";
  std::cin >> NUMBER_OF_CHARACTERS;
  for(size_t i = 0; i < 4; i++){
    for(size_t j = 0; j < NUMBER_OF_CHARACTERS; j++){
      std::cout << "# ";
    } std::cout << std::endl;
  }
  return 0;
}