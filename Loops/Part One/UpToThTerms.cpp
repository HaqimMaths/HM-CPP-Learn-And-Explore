/*
* Title: Loop practices Part One
* By: Haqim Maths
* Programmed on: 2024, December 20th
*/

#include <iostream>
#include <cmath>

int main(int argc, char **argv){
  unsigned int input;
  std::cout << "Input a number of terms: ";
  std::cin >> input;
  const unsigned int NTH_TERMS = input;
  std::cout << "The natural numbers upto " << NTH_TERMS << "th terms are: ";
  unsigned int sum = 0;
  for(size_t i = 0; i <= NTH_TERMS; i++){
    if(i == 0){
      continue;
    }
    std::cout << i << " ";
    sum += i;
  } std::cout << std::endl;
  std::cout << "The sum of the natural numbers is: " << sum << std::endl;
  return 0;
}