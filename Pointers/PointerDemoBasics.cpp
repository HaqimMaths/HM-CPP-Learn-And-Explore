/*
 Title: Pointer demo basics
 By: Haqim Maths
 Programmed on: 2024, December 19th
*/

#include <iostream>

int main(int argc, char **argv){
 int *ptr;
 int data[] = {1,2,3,4,5,6,7,1,2,3,90,12,121,3};
 *ptr = data[0];
 std::cout << *ptr;
 for(size_t i = 0; i < sizeof(data) / sizeof(data[0]); i++){
  *ptr = data[i];
  std::cout << *ptr << std::endl;
 }
 return 0;
}