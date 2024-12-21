#/*
* Title: Loop practices Part Two
* By: Haqim Maths
* Programmed on: 2024, December 21th
*/

#include <iostream>
#include <vector>
#include <cmath>

int main(int argc, char **argv){
  unsigned int nth;
  std::cout << "Input the number of terms: ";
  std::cin >> nth;
  unsigned int counter = 0;
  unsigned int i = 0;
  std::vector<unsigned int> list;
  std::cout << "The odd numbers are: ";
  while(counter < nth){
    i += 1;
    if(i % 2 != 0){
      counter += 1;
      std::cout << i << " ";
      list.push_back(i);
    }
  }
  std::cout << std::endl;
  unsigned int sum = 0;
  for(size_t x : list){
    sum += x;
  }
  std::cout << "The sum of odd Natural numbers upto 5 terms: " << sum << std::endl;
  return 0;
}