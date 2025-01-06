/*
  Author: Haqim Maths (https:://github.com/haqimmaths)
  Topic: Check the size of a string
  Description: This program will check the size of a string
  Date: 06/01/2025
*/

#include <iostream>
#include <cstring>

int main(int argc, char **argv){
  const char* friendName = "Thiesyendran Chandrasegeran";
  const char friendNameTwo[] = "Thiesyendran Chandrasegeran";
  std::cout << "Size of friendName: " << std::strlen(friendName) << std::endl;
  std::cout << "Size of friendName: " << sizeof(friendName) << std::endl;
  std::cout << "Size of friendNameTwo: " << std::strlen(friendNameTwo) << std::endl;
  std::cout << "Size of friendNameTwo: " << sizeof(friendNameTwo) << std::endl;
  std::cout << "Compare: " << std::strcmp(friendName, friendNameTwo) << std::endl;
  return 0;
}