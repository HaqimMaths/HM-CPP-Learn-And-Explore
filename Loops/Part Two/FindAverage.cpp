/*
* Title: Loop practices Part Two
* By: Haqim Maths
* Programmed on: 2024, December 21th
*/

#include <iostream>
#include <vector>
#include <cmath>

int main(int argc, char **argv){
  unsigned int NUMBER_OF_POSITIVE_INTEGERS;
  unsigned int MAXIMUM_VALUE;
  unsigned int MINIMUM_VALUE;
  std::vector<unsigned int> list;
  std::cout << "Number of positive integers are: ";
  std::cin >> NUMBER_OF_POSITIVE_INTEGERS;
  std::cout << "The maximum value is: ";
  std::cin >> MAXIMUM_VALUE;
  std::cout << "The minimum value is: ";
  std::cin >> MINIMUM_VALUE;
  unsigned int counter = 0;
  while(counter < NUMBER_OF_POSITIVE_INTEGERS){
    unsigned int n;
    std::cout << "Input a number that is > " << MINIMUM_VALUE << " and < " << MAXIMUM_VALUE << ": ";
    std::cin >> n;
    if(n < MINIMUM_VALUE || n > MAXIMUM_VALUE){
      std::cout << "Must be between minimum and maximum value!" << std::endl;
      continue;
    } else {
      std::cout << "Success!" << std::endl;
      list.push_back(n);
      counter += 1;
    }
  }
  double sum = 0;
  for(unsigned int x : list){
    sum += x;
  }
  sum /= NUMBER_OF_POSITIVE_INTEGERS;
  std::cout << "The average is: " << sum << std::endl;
  return 0;
}