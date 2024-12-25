/*
  Section: Dynamic Arrays Exercises (Part One)
  Title: Create a 2D Array
  Developed By: Haqim Maths
  Date: 2024, December 25th
*/

#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using string = std::string;

const int ROWS = 2;
const int COLS = 2;

void timer(int seconds) {
  std::this_thread::sleep_for(std::chrono::seconds(seconds)); //std::cout << "Timer finished: " << seconds << " seconds elapsed." << std::endl; 
}

int main(int argc, char **argv){
  float** luckyNumbers = new float*[ROWS];
  for(size_t i = 0; i < ROWS; i++){
    luckyNumbers[i] = new float[COLS];
  }
  float value = -2;
  for(size_t i = 0; i < ROWS; i++){
    for(size_t j = 0; j < COLS; j++){
      luckyNumbers[i][j] = value;
      value -= 0.43;
    }
  }
  std::cout << "Lucky numbers: " << std::endl;
  timer(2);
  for(size_t i = 0; i < ROWS; i++){
    std::cout << "[";
    for(size_t j = 0; j < COLS; j++){
      timer(2);
      std::cout << luckyNumbers[i][j] << " ";
    }
    std::cout << "]" << std::endl;
  }
  string** luckyLetters = new string*[ROWS];
  for(size_t i = 0; i < ROWS; i++){
    luckyLetters[i] = new string[COLS];
  }
  for(size_t i = 0; i < ROWS; i++){
    for(size_t j = 0; j < COLS; j++){
      luckyLetters[i][j] = static_cast<char>(i+1);
    }
  }
  std::cout << "Lucky Letters: " << std::endl;
  timer(2);
  for(size_t i = 0; i < ROWS; i++){
    std::cout << "[";
    for(size_t j = 0; j < COLS; j++){
      timer(2);
      std::cout << luckyLetters[i][j] << " ";
    }
    std::cout << "]" << std::endl;
  }
  std::cout << "Deallocate memory for both arrays....." << std::endl;
  for(size_t i = 0; i < ROWS; i++){
    delete[] luckyNumbers[i];
    delete[] luckyLetters[i];
  }
  delete[] luckyNumbers;
  delete[] luckyLetters;
  return 0;
}