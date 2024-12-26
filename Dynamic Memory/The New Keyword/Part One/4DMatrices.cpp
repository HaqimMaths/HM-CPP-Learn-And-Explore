/*
  Section: Dynamic Arrays Exercises (Part One)
  Title: Create a 4D Matrices with using dynamic memory allocation
  Developed By: Haqim Maths
  Date: 2024, December 27th 
*/

#include <iostream>
#include <typeinfo>

const int SIZE {5};

// Number of dimenstions functions
template <typename D>
unsigned int calculateNumberOfDimensions(D){
  return 0;
}
template <typename D>
unsigned int calculateNumberOfDimensions(D* matrice){
  return 1 + calculateNumberOfDimensions(*matrice);
}

int main(int argc, char **argv){
  double**** matriceTwo {new double***[SIZE]};
  for(size_t i {0}; i < SIZE; i++){
    matriceTwo[i] = new double**[SIZE];
    for(size_t j {0}; j < SIZE; j++){
      matriceTwo[i][j] = new double*[SIZE];
      for(size_t k {0}; k < SIZE; k++){
        matriceTwo[i][j][k] = new double[SIZE];
      }
    }
  }
  // Assigning values
  for(size_t i {0}; i < SIZE; i++){
    for(size_t j {0}; j < SIZE; j++){
      for(size_t k {0}; k < SIZE; k++){
        for(size_t l {0}; l < SIZE; l++){
          matriceTwo[i][j][k][l] = (i + 1) * (j + 2) * (k + 3) * (l + 4);
        }
      }
    }
  }
  // Display the values
  std::cout << "The matrice two: " << std::endl;
  std::cout << "[" << std::endl;
  for(size_t i {0}; i < SIZE; i++){
    std::cout << "  [" << std::endl;
    for(size_t j {0}; j < SIZE; j++){
      std::cout << "    [" << std::endl;
      for(size_t k {0}; k < SIZE; k++){
        std::cout << "      [";
        for(size_t l {0}; l < SIZE; l++){
          if(l < SIZE - 1){
            std::cout << matriceTwo[i][j][k][l] << ", ";
          } else {
            std::cout << matriceTwo[i][j][k][l];
          }
        }
        std::cout << "]," << std::endl;
      }
      std::cout << "    ]," << std::endl;
    }
    std::cout << "  ]," << std::endl;
  }
  std::cout << "]" << std::endl;
  std::cout << "Number of dimensions: " << calculateNumberOfDimensions(matriceTwo) << std::endl;
  // Deallocating memory
  for(size_t i {0}; i < SIZE; i++){
    for(size_t j {0}; j < SIZE; j++){
      for(size_t k {0}; k < SIZE; k++){
        delete[] matriceTwo[i][j][k];
      }
      delete[] matriceTwo[i][j];
    }
    delete[] matriceTwo[i];
  }
  delete[] matriceTwo;
  return 0;
}