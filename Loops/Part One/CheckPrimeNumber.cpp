/*
* Title: Loop practices Part One
* By: Haqim Maths
* Programmed on: 2024, December 20th
*/

#include <iostream>
#include <cmath>

bool isPrime(unsigned int n){
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
  unsigned int n;
  std::cout << "Input a number to check prime or not: ";
  std::cin >> n;
  if(isPrime(n)){
    std::cout << "The entered number is a prime number!" << std::endl;
  } else {
    std::cout << "The entered number is not a prime number!" << std::endl;
  }
  return 0;
}