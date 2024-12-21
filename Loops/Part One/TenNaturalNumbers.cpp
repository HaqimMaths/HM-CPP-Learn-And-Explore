/*
* Title: Loop practices Part One
* By: Haqim Maths
* Programmed on: 2024, December 20th
*/

#include <iostream>
#include <cmath>

void printNaturalNumbers(){
  for(size_t i = 0; i <= 10; ++i){
    if(i == 0){
      continue;
    }
    std::cout << i << " ";
  }
}

int main(int argc, char **argv){
  printNaturalNumbers();
  return 0;
}