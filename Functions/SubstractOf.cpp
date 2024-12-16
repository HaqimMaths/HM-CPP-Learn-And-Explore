/* Basic subtract function by Haqim Maths
 2024, December 17th
*/

#include <iostream>

float subtractOf(const float& a, const float& b){
 return a - b;
}

int main(int argc, char **argv){
 // Declare variables and initialize variables
 const float a = 20.122;
 const float b = 19.2812;
 float result = subtractOf(a, b);
 // Print the result :)
 std::cout << "The result: " << result << std::endl;
 return 0;
}