/*Basic sum function by Haqim Maths
 2024, December 17th
*/

#include <iostream>

int sumOf(int x, int y){
 return x + y;
}

int main(int argc, char **argv){
 // Declare and initialize variables
 signed int x = 10;
 signed int y = 20;
 // Print and call the function
 std::cout << "The result of x (10) + y (20) is: " << sumOf(x, y) << std::endl;
 return 0;
}