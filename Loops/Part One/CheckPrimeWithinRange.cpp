/*
* Title: Loop practices Part One
* By: Haqim Maths
* Programmed on: 2024, December 20th
*/

#include <iostream>
#include <cmath>

bool isPrime(int n){
  if(n <= 1){
    return false;
  } else {
    for(size_t i = 2; i <= std::sqrt(n); i++){
      if(n % i == 0){
        return false;
      }
    }
    return true;
  }
}

int main(int argc, char **argv){
  unsigned int inputOne;
  unsigned int inputTwo;
  std::cout << "Input number for starting range: ";
  std::cin >> inputOne;
  std::cout << "Input number for ending range: ";
  std::cin >> inputTwo;
  const unsigned int START = inputOne;
  const unsigned int END = inputTwo;
  std::cout << "The prime numbers between 1 and 100 are: " << std::endl;
  for(size_t i = 0; i <= 100; i++){
    if(isPrime(i) == false){
      continue;
    }
    std::cout << i << " ";
  } std::cout << std::endl;
  return 0;
}