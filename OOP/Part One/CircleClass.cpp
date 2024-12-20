/*
* Title: OOP practices Part One
* By: Haqim Maths
* Programmed on: 2024, December 19th
*/

#include <iostream>
#include "HM_SimpleMath.h"

class Circle{
 private:
  // Attributes
  double radius;
 public:
  // Constructor with initializer list
  Circle(double newRadius): radius(newRadius){}
  // Getter
  double getRadius(){
   return this->radius;
  }
  // Functions
  double calculateCircumference(){
   return 2 * HMath::PI * this->radius;
  }
  double calculateArea(){
   return HMath::PI * HMath::powerOf(this->radius, 2);
  }
};

int main(int argc, char **argv){
 // Create a circle object
 Circle circleOne(19);
 std::cout << "The radius of circle one: " << circleOne.getRadius() << std::endl;
 std::cout << "The area of circle one: " << circleOne.calculateArea() << std::endl;
 std::cout << "The circumference of circle one: " << circleOne.calculateCircumference() << std::endl;
 return 0;
}
