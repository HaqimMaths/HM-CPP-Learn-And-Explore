/*
* Title: Loop practices Part One
* By: Haqim Maths
* Programmed on: 2024, December 20th
*/

#include <iostream>
#include <cmath>

int main(int argc, char **argv){
  size_t sum = 0;
  std::cout << "The natural numbers are: " << std::endl;
  for(size_t i = 0; i <= 10; i++){
    if(i == 0){
      continue;
    }
    std::cout << i << " ";
    sum += i;
  } std::cout << std::endl;
  std::cout << "The sum of first 10 natural numbers: " << sum << std::endl;
  return 0;
}