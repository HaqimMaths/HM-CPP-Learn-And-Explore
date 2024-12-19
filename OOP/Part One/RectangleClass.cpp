/*
* Title: OOP practices Part One
* By: Haqim Maths
* Programmed on: 2024, December 19th
*/

#include <iostream>
#include "HM_SimpleMath.h"

class Rectangle{
 private:
  double length;
  double width;
 public:
  // Constructor
  Rectangle(double l, double w) : length(l), width(w){}
  // Setters
  void setLength(double l){
   this->length = l;
  }
  void setWidth(double w){
   this->width = w;
  }
  // Getters
  double getLength(){
   return this->length;
  }
  double getWidth(){
   return this->width;
  }
  // Functions
  double getArea(){
   return this->length * this->width;
  }
  double getPerimeter(){
   return 2 * (this->length + this->width);
  }
};

int main(int argc, char **argv){
 // Create a rectangle object
 Rectangle rectangleOne(190, 200.12);
 // Display the length and the width
 std::cout << "Length and width of rectangleOne: " << rectangleOne.getLength() << "cm | " << rectangleOne.getWidth() << "cm." << std::endl;
 // Calculate Area
 std::cout << "The area: " << rectangleOne.getArea() << "cm." << std::endl;
 // Calculate Perimeter
 std::cout << "The perimeter: " << rectangleOne.getPerimeter() << "cm." << std::endl;
 // Assign new length and width values
 rectangleOne.setLength(1234);
 rectangleOne.setWidth(9345.221);
 // Display the new length and the width
 std::cout << "New length and width of rectangleOne: " << rectangleOne.getLength() << "cm | " << rectangleOne.getWidth() << "cm." << std::endl;
 // Calculate New Area
 std::cout << "The new area: " << rectangleOne.getArea() << "cm." << std::endl;
 // Calculate New Perimeter
 std::cout << "The new perimeter: " << rectangleOne.getPerimeter() << "cm." << std::endl;
 return 0;
}