/*
* Title: Loop practices Part Two
* By: Haqim Maths
* Programmed on: 2024, December 21th
*/

#include <iostream>
#include <list>
#include <cmath>

int main(int argc, char **argv){
  unsigned int n;
  std::list<unsigned int> list;
  std::cout << "Input the value for nth term: ";
  std::cin >> n;
  for(size_t i = 0; i <= n; i++){
    if(i == 0){
      continue;
    }
    list.push_front(i * i);
    std::cout << i << "*" << i << " = " << (i * i) << std::endl;
  }
  std::cout << "The sum of the above series is: ";
  unsigned int sum;
  for(unsigned int x : list){
    sum += x;
  }
  std::cout << sum << std::endl;
  return 0;
}