/*
  Section: Dynamic Arrays Exercises (Part One)
  Title: Create Dynamics Array for Int, Char, and String
  Developed By: Haqim Maths
  Date: 2024, December 25th
*/

#include <iostream>
#include <typeinfo>
#include <string>

using string = std::string;

int main(int argc, char **argv){
  int* x = new int;
  *x = 20;
  char* y = new char;
  *y = 'a';
  string* z = new string;
  *z = "Soundwave";
  std::cout << "Dynamic memory" << std::endl;
  std::cout << typeid(x).name() << ": " << *x << " | " << x << std::endl;
  std::cout << typeid(y).name() << ": " << *y << " | " << y << std::endl;
  std::cout << typeid(z).name() << ": " << *z << " | " << z << std::endl;
  delete x;
  delete y;
  delete z;
  return 0;
}