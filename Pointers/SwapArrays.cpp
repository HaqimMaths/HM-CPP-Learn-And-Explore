/*
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Topic: Swap Arrays with two different methods
  Description: This program swaps two arrays with two different methods. The first method uses a temporary array to store the values of the first array and then swaps the values of the first array with the second array. The second method uses pointers to swap the values of the first array with the second array.
  Date: 05/01/2025
*/

#include <iostream>

void swapWayOne(){
  int a[] = {1, 2, 3, 4, 5};
  int b[] = {6, 7, 8, 9, 10};
  int temp[5];
  std::cout << "Before swapping" << std::endl;
  for(int i = 0; i < std::size(a); i++){
    std::cout << a[i] << " ";
  }
  std::cout << std::endl;
  for(int i = 0; i < 5; i++){
    std::cout << b[i] << " ";
  }
  for(int i = 0; i < 5; i++){
    temp[i] = a[i];
    a[i] = b[i];
    b[i] = temp[i];
  }
  std::cout << "After swapping" << std::endl;
  for(int i = 0; i < 5; i++){
    std::cout << a[i] << " ";
  }
  std::cout << std::endl;
  for(int i = 0; i < 5; i++){
    std::cout << b[i] << " ";
  }
  std::cout << std::endl;
}

void swapWayTwo(){
  int arrZero[] = {1, 2, 3, 4, 5};
  int arrOne[] = {6, 7, 8, 9, 10};
  int* ptrArrZero = arrZero;
  int* ptrArrOne = arrOne;
  int* temp = nullptr;
  std::cout << "Before swapping" << std::endl;
  for(int i = 0; i < 5; i++){
    std::cout << ptrArrZero[i] << " ";
  }
  std::cout << std::endl;
  for(int i = 0; i < 5; i++){
    std::cout << ptrArrOne[i] << " ";
  }
  temp = ptrArrZero;
  ptrArrZero = ptrArrOne;
  ptrArrOne = temp;
  std::cout << "After swapping" << std::endl;
  for(int i = 0; i < 5; i++){
    std::cout << ptrArrZero[i] << " ";
  }
  std::cout << std::endl;
  for(int i = 0; i < 5; i++){
    std::cout << ptrArrOne[i] << " ";
  }
  std::cout << std::endl;
}

int main(int argc, char **argv){
  swapWayOne();
  swapWayTwo();
  return 0;
  //std::cin.get();
}