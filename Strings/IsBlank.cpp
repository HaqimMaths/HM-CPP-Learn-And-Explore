/*
  Author: Haqim Maths (https://github.com/haqimmaths)
  Topic: Check if a char is blank
  Description: This program will check if a char is blank
  Date: 06/01/2025
*/

#include <iostream>
#include <cctype>

int main(int argc, char **argv){
  char myName[] = "Haqim Maths";
  unsigned int index = 0;
  for(char x : myName){
    if(std::isblank(x)){
      std::cout << x << " is a blank at index [" << index << "]" << std::endl;
    } else {
      std::cout << x << " is not blank at index [" << index << "]" << std::endl;
    }
    index++;
  }
}