/*
 Title: Demonstrate how to handle pointers
 By: Haqim Maths
 Programmed on: 2024, December 19th
*/

#include <iostream>

int main(int argc, char **argv){
 int m = 29;
 std::cout << "Address of m: " << &m << std::endl;
 std::cout << "Value of m: " << m << std::endl;
 int* ab;
 ab = &m;
 std::cout << "Now ab is assigned the address of m." << std::endl;
 std::cout << "Address of pointer ab: " << ab << std::endl;
 std::cout << "Content of pointer ab: " << *ab << std::endl;
 m = 34;
 std::cout << "The value of m assigned to 34 now." << std::endl;
 std::cout << "Address of pointer ab: " << ab << std::endl;
 std::cout << "Content of pointer ab: " << *ab << std::endl;
 std::cout << "Address of m: " << &m << std::endl;
 std::cout << "Value of m: " << m << std::endl;
 *ab = 7;
 std::cout << "The content of pointer ab assigned to 7 now." << std::endl;
 std::cout << "Address of m: " << &m << std::endl;
 std::cout << "Value of m: " << m << std::endl;
 return 0;
}