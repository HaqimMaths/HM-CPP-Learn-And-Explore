/*
  Author: Haqim Maths (https://github.com/haqimmaths)
  Topic: Check if a char is a numeric
  Description: This program will check if a char is a numeric
  Date: 06/01/2025
*/

#include <iostream>
#include <cctype>

void methodOne(){
  std::cout << "Method One" << std::endl;
  char c;
  std::cout << "Enter a character: ";
  std::cin >> c;

  if (c >= '0' && c <= '9') {
    std::cout << "The character is a numeric." << std::endl;
  } else {
    std::cout << "The character is not a numeric." << std::endl;
  }
}

void methodTwo(){
  std::cout << "Method Two" << std::endl;
  char c;
  std::cout << "Enter a character: ";
  std::cin >> c;

  if (std::isdigit(c)) {
    std::cout << "The character is a numeric." << std::endl;
  } else {
    std::cout << "The character is not a numeric." << std::endl;
  }
}

void methodThree(){
  char c = 10;
  std::cout << "Method Three" << std::endl;
  std::cout << std::isalnum(c) << std::endl;
}

void methodFour(){
  std::cout << "Method Four" << std::endl;
  char message[] = "Hello 1 World!";
  for(int i = 0; message[i] != '\0'; i++){
    if(isdigit(message[i])){
      std::cout << message[i] << " is a numeric." << std::endl;
    } else {
      std::cout << message[i] << " is not a numeric." << std::endl;
    }
  }
}

int main() {
  methodOne();
  methodTwo();
  methodThree();
  methodFour();
  return 0;
}