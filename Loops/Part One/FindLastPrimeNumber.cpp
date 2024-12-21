/*
* Title: Loop practices Part One
* By: Haqim Maths
* Programmed on: 2024, December 20th
*/

#include <iostream>
#include <vector>
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
  unsigned int n;
  std::vector<unsigned int> listOfPrimeNumbers;
  std::cout << "Input a number to find the last prime number occurs: ";
  std::cin >> n;
  for(size_t i = 0; i <= n; i++){
    if(isPrime(i) == false){
      continue;
    }
    if(isPrime(i)){
      listOfPrimeNumbers.push_back(i);
    }
  }
  std::cout << "The last prime number is: " << listOfPrimeNumbers.back() << std::endl;
  return 0;
}