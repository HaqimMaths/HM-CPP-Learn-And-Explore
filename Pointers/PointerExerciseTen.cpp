/* 
 Title: Swap integer numbers by using references
 By: Haqim Maths
 Programmed on: 2024, December 19th
*/

#include <iostream>

int main(void){
 std::cout << "Test Data : " << std::endl;
 int a, b, c;
 std::cout << "Input the value of 1st element : ";
 std::cin >> a;
 std::cout << "Input the value of 2nd element : ";
 std::cin >> b;
 std::cout << "Input the value of 3rd element : ";
 std::cin >> c;
 std::cout << "The value before swapping are : " << std::endl;
 std::cout << "a : " << a << std::endl;
 std::cout << "b : " << b << std::endl;
 std::cout << "c : " << c << std::endl;
 int& ref1 = a;
 int& ref2 = b;
 int& ref3 = c;
 int temp = ref1;
 ref1 = ref3;
 ref3 = ref2;
 ref2 = temp;
 std::cout << "The value after swapping are : " << std::endl;
 std::cout << "a : " << a << std::endl;
 std::cout << "b : " << b << std::endl;
 std::cout << "c : " << c << std::endl;
 return 0;
}