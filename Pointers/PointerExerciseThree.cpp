/*
 Title: Demonstrate the use of & and *
 By: Haqim Maths
 Programmed on: 2024, December 19th
*/

#include <iostream>

int main(int argc, char **argv){
 std::cout << "Pointer : Demonstrate the use of & and * operator : " << std::endl;
 std::cout << "--------------------------------------------------" << std::endl;
 unsigned int m = 300;
 double fx = 300.600006;
 char cht = 'z';
 unsigned int* ptr1;
 ptr1 = &m;
 double* ptr2;
 ptr2 = &fx;
 char* ptr3;
 ptr3 = &cht;
 std::cout << "Using & operator :" << std::endl;
 std::cout << "----------------------------------------" << std::endl;
 std::cout << "Address of m : " << &m << std::endl;
 std::cout << "Address of fx : " << &fx << std::endl;
 std::cout << "Address of cht : " << &cht << std::endl;
 std::cout << "Using & and * operator : " << std::endl;
 std::cout << "----------------------------------------" << std::endl;
 std::cout << "Value at address of m : " << *&m << std::endl;
 std::cout << "Value at address of fx : " << *&fx << std::endl;
 std::cout << "Value at address of cht : " << *&cht << std::endl;
 std::cout << "Using only pointer variable :" << std::endl;
 std::cout << "----------------------------------------" << std::endl;
 std::cout << "Address of m : " << ptr1 << std::endl;
 std::cout << "Address of fx : " << ptr2 << std::endl;
 std::cout << "Address of cht : " << ptr3 << std::endl;
 std::cout << "Using only pointer operator :" << std::endl;
 std::cout << "----------------------------------------" << std::endl;
 std::cout << "Value at address of m : " << *ptr1 << std::endl;
 std::cout << "Value at address of fx : " << *ptr2 << std::endl;
 std::cout << "Value at address of cht : " << *ptr3 << std::endl;
 return 0;
}