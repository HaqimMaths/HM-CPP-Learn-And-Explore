/*
* Title: Loop practices Part Two
* By: Haqim Maths
* Programmed on: 2024, December 21th
*/

#include <iostream>
#include <vector>
#include <cmath>

int main(int argc, char **argv){
  unsigned int n;
  std::cout << "Input the value for the nth term: ";
  std::cin >> n;
  std::vector<double> list;
  for(size_t i = 0; i <= n; i++){
    if(i == 0){
      continue;
    }
    list.push_back(1 / (std::pow(i, i)));
    std::cout << "1/" << i << "^" << i << " = " << 1 / (std::pow(i, i)) << std::endl;
  }
  std::cout << "The sum of the above series is: ";
  double sum;
  for(double x : list){
    sum += x;
  }
  std::cout << sum << std::endl;
  return 0;
}