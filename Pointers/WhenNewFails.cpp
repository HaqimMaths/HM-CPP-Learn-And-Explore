/*
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Topic: When New Fails
  Description: This program demonstrates what happens when new fails to allocate memory.
  Date: 05/01/2025
*/

#include <iostream>

int main(int argc, char **argv){
  try{
    int* ptr = new int[1000000000000000000];
  }catch(std::exception& e){
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  int* data = new(std::nothrow) int[1000000000000000000];
  if(data == nullptr){
    std::cerr << "Memory allocation failed!" << std::endl;
  }else{
    std::cout << "Memory allocation successful!" << std::endl;
    delete[] data;
  }
  std::cout << "Program ending well.........." << std::endl;
}