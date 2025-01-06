/*
  Author: Haqim Maths (https://github.com/haqimmaths)
  Topic: Compare Strings
*/

#include <iostream>
#include <cstring>
#include <cctype>
#include <algorithm>

int main(int argc, char **argv){
  const char* message = "Alabama";
  const char* message2 = "Alabama";
  std::cout << std::strcmp(message, message2) << std::endl;
  std::cout << std::strchr(message, 'l') << std::endl;
  // Sort message!
  //std::sort(message.begin(), message.end());
  const char* message3 = message;
  std::cout << message << std::endl;
  std::cout << message2 << std::endl;
  std::cout << message3 << std::endl;
  std::cout << std::strcmp(message, message2) << std::endl;
  std::cout << std::strncmp(message, message2, 3) << std::endl;
  return 0;
}