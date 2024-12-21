/*
* Title: Loop practices Part One
* By: Haqim Maths
* Programmed on: 2024, December 20th
*/

#include <iostream>
#include <cmath>

unsigned long long findFactorial(unsigned int n){
  unsigned long long result = 1;
  for(size_t i = 1; i <= n; i++){
    result = result * i;
  }
  return result;
}

int main(int argc, char **argv){
  unsigned int n;
  std::cout << "Input a number to find a factorial: ";
  std::cin >> n;
  std::cout << "The factorial for the given number: " << findFactorial(n) << std::endl;
  return 0;
}