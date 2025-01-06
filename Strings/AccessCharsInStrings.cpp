/*
  Author: Haqim Maths (https://github.com/haqimmaths)
  Topic: Access chars!
  Date: 06/01/2025
*/

#include <iostream>
#include <string> 

int main(int argc, char **argv){
  std::string myName;
  myName.append(std::string{"Haqim "} + "Maths");
  std::cout << myName << std::endl;
  std::cout << "The front: " << myName.front() << std::endl;
  std::cout << "The rear: " << myName.back() << std::endl;
  char& frontChar = myName.front();
  char& backChar = myName.back();
  frontChar = 'U';
  backChar = 'U';
  std::cout << myName << std::endl;
  return 0;
}