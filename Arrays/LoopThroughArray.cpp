#include <iostream>

int main(int argc, char **argv){
 int x[] = {1,2,3,4,5,6,7,8,9,10};
 int sizeOfX = sizeof(x) / sizeof(x[0]);
 std::cout << "Size of the array: " << sizeOfX << std::endl;
 // Traditional for loop
 std::cout << "Traditional for loop array" << std::endl;
 for(size_t i = 0; i < sizeOfX; i++){
  std::cout << x[i] << " ";
 }
 std::cout << std::endl;
 // For each loop (modern for loop)
 std::cout << "For each loop array" << std::endl;
 for(int num : x){
  std::cout << num << " ";
 } std::cout << std::endl;
 return 0;
}