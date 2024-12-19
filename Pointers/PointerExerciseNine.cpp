/*
 Title: Count the length of string by using a pointer
 By: Haqim Maths
 Programmed on: 2024, December 19th
*/

#include <iostream>
#include <string>

int main(int argc, char **argv){
 std::string text;
 std::cout << "Test Data : " << std::endl;
 std::cout << "Input a string : ";
 std::getline(std::cin, text);
 const char* ptr;
 ptr = text.c_str();
 unsigned int length = 0;
 while(*ptr != '\0'){
  length++;
  ptr++;
 }
 std::cout << "The length of your text is: " << length << std::endl;
 return 0;
}