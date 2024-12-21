/*
* Title: Loop practices Part Two
* By: Haqim Maths
* Programmed on: 2024, December 21th
*/

#include <iostream>
#include <vector>
#include <cmath>

bool isPrime(int n){
  for(int i = 2; i <= std::sqrt(n); i++){
    if(n % i == 0){
      return false;
      break;
    }
  }
  return true;
}

int main(int argc, char **argv){
  unsigned int UPPER_LIMIT;
  std::cout << "Input the upperlimit: ";
  std::cin >> UPPER_LIMIT;
  std::cout << "The non-prime numbers are: ";
  for(size_t i = 1; i <= UPPER_LIMIT; i++){
    if(isPrime(i) == false){
      std::cout << i << " ";
    }
  }
  std::cout << std::endl;
  return 0;
}