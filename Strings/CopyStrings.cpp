/*
  Author: Haqim Maths (https://github.com/haqimmaths)
  Topic: Copy strings!
  Date: 06/01/2025
*/

#include <iostream>
#include <cstring>

int main(int argc, char **argv){
  char* theMessage = new char[5]{'H', 'a', 'i', 'T', '\0'};
  const char* myMessage = "Hell";
  //std::strcpy(theMessage, myMessage); // Give warnings
  //std::cout << theMessage << std::endl; // Give warnings
  std::strncpy(theMessage, myMessage, 3);
  std::cout << theMessage << std::endl;
  const char* copyMyMessage = new char[std::strlen(myMessage)+1];
  copyMyMessage = myMessage;
  std::cout << copyMyMessage << std::endl;
  if(theMessage){
    delete[] theMessage;
    theMessage = nullptr;
  }
  if(copyMyMessage){
    delete[] copyMyMessage;
    copyMyMessage = nullptr;
  }
  return 0;
}