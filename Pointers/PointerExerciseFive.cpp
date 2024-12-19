/*
 Title: Sum of numbers by using references
 By: Haqim Maths
 Programmed on: 2024, December 19th
*/

#include <iostream>

int main(int argc, char **argv){
 signed int a;
 signed int b;
 std::cout << "Input the first number : ";
 std::cin >> a;
 std::cout << "Input the second number : ";
 std::cin >> b;
 signed int sum;
 signed int& ref1 = a;
 signed int& ref2 = b;
 sum = ref1 + ref2;
 std::cout << "ref1: " << ref1 << std::endl;
 std::cout << &ref1 << " " << &a << std::endl;
 std::cout << "The sum of " << a << " + " << b << " is: " << sum << std::endl;
 ref1 = 100;
 std::cout << "ref1: " << ref1 << std::endl;
 std::cout << &ref1 << " " << &a << std::endl;
 return 0;
}