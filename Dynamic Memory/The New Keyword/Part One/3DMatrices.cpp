/*
  Section: Dynamic Arrays Exercises (Part One)
  Title: Create a 3D Matrices using dynamic memory allocation
  Developed By: Haqim Maths
  Date: 2024, December 26th
*/

#include <iostream>
#include <string>

using string = std::string;

const int SIZE = 3;

int main(int argc, char **argv){
  int*** arr = new int**[SIZE];
  for(size_t i = 0; i < SIZE; i++){
    arr[i] = new int*[SIZE];
    for(size_t j = 0; j < SIZE; j++){
      arr[i][j] = new int[SIZE];
    }
  }
  for(size_t i = 0; i < SIZE; i++){
    for(size_t j = 0; j < SIZE; j++){
      for(size_t k = 0; k < SIZE; k++){
        arr[i][j][k] = (i + 1) * (j + 2) * (k + 3);
      }
    }
  }
  std::cout << "3D Array: " << std::endl;
  std::cout << "[" << std::endl;
  for(size_t i = 0; i < SIZE; i++){
    std::cout << "\t[" << std::endl;
    for(size_t j = 0; j < SIZE; j++){
      std::cout << "\t\t[";
      for(size_t k = 0; k < SIZE; k++){
        if(k < 2){
          std::cout << arr[i][j][k] << ", ";
        } else {
          std::cout << arr[i][j][k];
        }
      }
      std::cout << "]," << std::endl;
    }
    std::cout << "\t]," << std::endl;
  }
  std::cout << "]" << std::endl;
  // Deallocate memory
  for(size_t i = 0; i < SIZE; i++){
    for(size_t j = 0; j < SIZE; j++){
      delete[] arr[i][j];
    }
    delete[] arr[i];
  }
  delete[] arr;
  return 0;
}