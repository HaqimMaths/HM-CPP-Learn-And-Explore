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
  unsigned int arr[n];
  unsigned int sum = 0;
  for(size_t i = 1; i <= n; i++){
    sum = 0;
    arr[i-1] = i;
    if(i == 0){
      continue;
    }
    if (i == 1){
      std::cout << i;
    }
    if(i > 1){
      for(size_t x = 1; x <= i; x++){
        if(x == i){
          std::cout << x;
          continue;
        }
        std::cout << x << "+";
      }
    }
    std::cout << " = ";
    for(size_t j = 0; j < i; j++){
      //std::cout << arr[j] << std::endl;
        //std::cout << sum << " ";
        sum += arr[j];
    }
    std::cout << sum << std::endl;
  }
  return 0;
}