/*
  Author: Haqim Maths (https://github.com/haqimmaths)
  Topic: Check if a char is upper or lower case and change to upper and lower cases
  Description: This program will check if a char is upper or lower case and change to upper and lower cases
  Date: 06/01/2025
*/

#include <iostream>
#include <cctype>

int main(int argc, char **argv){
  char myName[] = "Haqim Maths";
  std::string myNameInString = "Haqim Maths";
  std::cout << "Size of myName: " << sizeof(myName) << std::endl;
  std::cout << "Size of myNameInString: " << myNameInString.size() << std::endl;
  unsigned int index = 0;
  for(char x : myName){
    if(x == '\0'){ // break at the end of the string
      break;
    }
    if(std::isupper(x)){
      std::cout << x << " is an upper case at index [" << index << "]" << std::endl;
      std::cout << "Changing to lower case: " << static_cast<char>(std::tolower(x)) << std::endl;
    } else if(std::islower(x)){
      std::cout << x << " is a lower case at index [" << index << "]" << std::endl;
      std::cout << "Changing to upper case: " << static_cast<char>(std::toupper(x)) << std::endl;
    } else {
      std::cout << x << " is not an upper or lower case at index [" << index << "]" << std::endl;
    }
    index++;
  }
}