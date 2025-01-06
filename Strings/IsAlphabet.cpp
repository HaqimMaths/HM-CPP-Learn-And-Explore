/*
  Author: Haqim Maths (https://github.com/haqimmaths)
  Topic: Check if a char is an alphabet
  Description: This program will check if a char is an alphabet
  Date: 06/01/2025
*/

#include <iostream>
#include <cctype>

void methodOne(){
  std::cout << "Method One" << std::endl;
  char c;
  std::cout << "Enter a character: ";
  std::cin >> c;

  if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
    std::cout << "The character is an alphabet." << std::endl;
  } else {
    std::cout << "The character is not an alphabet." << std::endl;
  }
}

void methodTwo(){
  std::cout << "Method Two" << std::endl;
  char c;
  std::cout << "Enter a character: ";
  std::cin >> c;

  if (std::isalpha(c)) {
    std::cout << "The character is an alphabet." << std::endl;
  } else {
    std::cout << "The character is not an alphabet." << std::endl;
  }
}

void methodThree(){
  char c = 'a';
  std::cout << "Method Three" << std::endl;
  std::cout << std::isalpha(c) << std::endl;
}

void methodFour(){
  std::cout << "Method Four" << std::endl;
  char message[] = "Hello 1 World!";
  for(int i = 0; message[i] != '\0'; i++){
    if(isalpha(message[i])){
      std::cout << message[i] << " is an alphabet." << std::endl;
    } else {
      std::cout << message[i] << " is not an alphabet." << std::endl;
    }
  }
}

int main(int argc, char **argv) {
  methodOne();
  methodTwo();
  methodThree();
  methodFour();
  return 0;
}