/*
* Title: Loop practices Part Two
* By: Haqim Maths
* Programmed on: 2024, December 21th
*/

#include <iostream>
#include <vector>
#include <cmath>

double calculatedTerm(unsigned int X, unsigned int nth){
  unsigned int factorialBase = (2 * (nth - 1));
  double factorialResult = 1;
  for(size_t i = 1; i <= factorialBase; ++i){
    factorialResult *= i;
  }
  //std::cout << factorialResult << std::endl;
  return std::pow(-1, nth-1) * (std::pow(X, 2 * (nth - 1)) / factorialResult);
}

int main(int argc, char **argv){
  unsigned int X;
  unsigned int nth;
  std::cout << "Input the value of X: ";
  std::cin >> X;
  std::cout << "Input the value for nth term: ";
  std::cin >> nth;
  double sum = 0;
  for(size_t i = 1; i <= nth; i++){
    std::cout << "term " << i << " value is: " << calculatedTerm(X, i) << std::endl;
    sum += calculatedTerm(X, i);
  }
  std::cout << "The sum of the above series is: " << sum << std::endl;
  return 0;
}