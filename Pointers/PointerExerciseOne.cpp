/*
 Title: Basic declaration of a pointer
 By: Haqim Maths
 Programmed on: 2024, December 19th
*/

#include <iostream>

int main(int argc, char **argv){
 int m = 10;
 int n;
 int o;
 std::cout << " Pointer : Show the basic declaration of pointer : " << std::endl;
 std::cout << "--------------------------------------------------" << std::endl;
 std::cout << "Here is m=10, n, and o are two integer variable and " << std::endl;
 int* z;
 z = &m;
 std::cout << "z stores the address of m = " << z << std::endl;
 std::cout << "*z stores the value of m = " << *z << std::endl;
 std::cout << "&m is the address of m = " << &m << std::endl;
 std::cout << "&n stores the address of n = " << &n << std::endl;
 std::cout << "&o stores the address of o = " << &o << std::endl;
 std::cout << "&z stores the address of z = " << &z << std::endl;
 return 0;
}