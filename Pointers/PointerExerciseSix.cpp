/*
 Title: Find the maximum number by using a pointer
 By: Haqim Maths
 Programmed on: 2024, December 19th
*/

#include <iostream>

int main(int argc, char **argv){
 std::cout << "Test Data : " << std::endl;
 long a, b;
 std::cout << "Input the first number : ";
 std::cin >> a;
 std::cout << "Input the second number : ";
 std::cin >> b;
 long* ptr1;
 long* ptr2;
 ptr1 = &a;
 ptr2 = &b;
 long sum = (*ptr1 > *ptr2) ? *ptr1 : *ptr2;
 std::cout << sum << " is the maximum number." << std::endl;   
 return 0;
}