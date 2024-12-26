/*
  Section: Dynamic Arrays Exercises (Part One)
  Title: Create a 3D Matrices with random elements using dynamic memory allocation
  Developed By: Haqim Maths
  Date: 2024, December 26th
*/

#include <iostream>
#include <random>
#include <thread>
#include <chrono>

const int SIZE = 5;

void timer(int seconds) {
  std::this_thread::sleep_for(std::chrono::seconds(seconds)); //std::cout << "Timer finished: " << seconds << " seconds elapsed." << std::endl; 
}

int main(int argc, char **argv){
  std::random_device RANDOM;
  std::mt19937 GEN(RANDOM());
  std::uniform_real_distribution<> DISTRIB(0.0, 1.0);
  float*** matriceOne = new float**[SIZE];
  std::cout << "Initliasing 3x3 Matrices....." << std::endl;
  timer(2);
  for(size_t i = 0; i < SIZE; i++){
    matriceOne[i] = new float*[SIZE];
    for(size_t j = 0; j < SIZE; j++){
      matriceOne[i][j] = new float[SIZE];
    }
  }
  std::cout << "Assigning random real values between 0.0 - 1.0 for the matrices....." << std::endl;
  timer(2);
  for(size_t i = 0; i < SIZE; i++){
    for(size_t j = 0; j < SIZE; j++){
      for(size_t k = 0; k < SIZE; k++){
        matriceOne[i][j][k] =  DISTRIB(GEN);
      }
    }
  }
  std::cout << "Outputing matriceOne:" << std::endl;
  std::cout << "[" << std::endl;
  for(size_t i = 0; i < SIZE; i++){
    std::cout << "  [" << std::endl;
    for(size_t j = 0; j < SIZE; j++){
      std::cout << "    [";
      for(size_t k = 0; k < SIZE; k++){
        if(k < SIZE - 1){
          std::cout << matriceOne[i][j][k] << ", ";
        } else {
          std::cout << matriceOne[i][j][k];
        }
      }
      std::cout << "]," << std::endl;
    }
    std::cout << "  ]," << std::endl;
  }
  std::cout << "]" << std::endl;
  return 0;
}