/*
  Section: Dynamic Arrays Exercises (Part One)
  Title: Create a 6x6 Matrice
  Developed By: Haqim Maths
  Date: 2024, December 25th
*/

#include <iostream>

int main(int argc, char **argv){
  int** matA = new int*[6];
  for(size_t i = 0; i < 6; i++){
    matA[i] = new int[6];
  }
  for(size_t i = 0; i < 6; i++){
    for(size_t j = 0; j < 6; j++){
      matA[i][j] = (i + 1) * (j + 2);
    }
  }
  std::cout << "Matrix A (6x6): " << std::endl;
  for(size_t i = 0; i < 6; i++){
    std::cout << "[";
    for(size_t j = 0; j < 6; j++){
      std::cout << matA[i][j] << " ";
    }
    std::cout << "]" << std::endl;
  }
  for(size_t i = 0; i < 6; i++){
    delete[] matA[i];
  }
  delete[] matA;
  return 0;
}