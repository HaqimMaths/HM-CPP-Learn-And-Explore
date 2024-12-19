/*
 Title: Sum of numbers by using pointers
 By: Haqim Maths
 Programmed on: 2024, December 19th
*/

#include <iostream>

int main(int argc, char **argv){
 int a;
 int b;
 std::cout << "Input the first number : ";
 std::cin >> a; 
 std::cout << "Input the second number : ";
 std::cin >> b;
 int* ptr1;
 ptr1 = &a;
 int* ptr2;
 ptr2 = &b;
 int sum = *ptr1 + *ptr2;
 std::cout << "The sum of the entered numbers is : " << sum << std::endl;
 return 0;
}