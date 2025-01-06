/*
  Author: Haqim Maths (https://github.com/haqimmaths)
  Topic: Concat strings!
  Date: 06/01/2025
*/

#include <iostream>
#include <cstring>

int main(int argc, char **argv){
  const char* myName = "Haqim Maths";
  char* myFriendName = new char[100]{"Thisyendran"};
  std::strcat(myFriendName, "Thiesyendran");
  std::cout << myFriendName << std::endl;
  std::strncat(myFriendName, myName, 3);
  std::cout << myFriendName << std::endl;
  if(myFriendName){
    delete[] myFriendName;
    myFriendName = nullptr;
    std::cout << "Successfully released.........................." << std::endl;
  }
  return 0;
}