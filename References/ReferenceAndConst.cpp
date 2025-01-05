/*
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Topic: Reference and Const
  Description: This program demonstrates the use of references and const in C++.
  Date: 05/01/2025
*/

#include <iostream>

int main(int argc, char **argv){
  int a = 10;
  const int& refA = a;
  int b = 20;
  std::cout << "a = " << a << std::endl;
  std::cout << "refA = " << refA << std::endl;
  std::cout << "Changing a...... " << std::endl;
  a = 100;
  std::cout << "a = " << a << std::endl;
  std::cout << "refA = " << refA << std::endl;
  std::cout << "Try changing refA...... " << std::endl;
  //try{
    //refA = 1000; // This will cause an error
  //}
  //catch(...){
    //std::cout << "Error: Cannot change refA" << std::endl;
  //}
  // And refA cannot reference to other variable
  //refA = b; // error
  const int* const ptrA = &a;
  std::cout << "ptrA = " << ptrA << std::endl;
  std::cout << "*ptrA = " << *ptrA << std::endl;
  //ptrA = &b; // error
  //(*ptrA) = 200; // error
  const int* ptrB = &b;
  std::cout << "ptrB = " << ptrB << std::endl;
  std::cout << "*ptrB = " << *ptrB << std::endl;
  ptrB = &a; // No error
  std::cout << "ptrB = " << ptrB << std::endl;
  std::cout << "*ptrB = " << *ptrB << std::endl;
  
  return 0;
}