/*
* Title: OOP practices Part Two
* By: Haqim Maths
* Programmed on: 2024, December 20th
*/

#include <iostream>
#include <stdbool.h>
// Import own math library
#include "../Part One/HM_SimpleMath.h"

// Shortform string!
using string = std::string;

class Triangle{
 private:
  // Attributes
  double lengthSideOne;
  double lengthSideTwo;
  double lengthSideThree;
 public:
  // Constructor
  Triangle(double newLengthSideOne, double newLengthSideTwo, double newLengthSideThree) : lengthSideOne(newLengthSideOne), lengthSideTwo(newLengthSideTwo), lengthSideThree(newLengthSideThree) {

  }
  // Display Details
  friend std::ostream& operator<<(std::ostream& COUT, const Triangle& triangle){
   COUT << "Length of side one: " << triangle.getLengthSideOne() << std::endl;
   COUT << "Length of side two: " << triangle.getLengthSideTwo() << std::endl;
   COUT << "Length of side three: " << triangle.getLengthSideThree() << std::endl;
   return COUT;
  }
  // Setters
  void setLengthSideOne(double newLengthSideOne){
   this->lengthSideOne = newLengthSideOne;
  }
  void setLengthSideTwo(double newLengthSideTwo){
   this->lengthSideTwo = newLengthSideTwo;
  }
  void setLengthSideThree(double newLengthSideThree){
   this->lengthSideThree = newLengthSideThree;
  }
  // Getters
  double getLengthSideOne() const {
   return this->lengthSideOne;
  }
  double getLengthSideTwo() const {
   return this->lengthSideTwo;
  }
  double getLengthSideThree() const {
   return this->lengthSideThree;
  }
  // Functions
  bool isEquilateral(){
   return this->getLengthSideOne() == this->getLengthSideTwo() && this->getLengthSideThree() == this->getLengthSideOne() ? true : false;
  }
  bool isIsosceles(){
   return this->getLengthSideOne() == this->getLengthSideTwo() || this->getLengthSideOne() == this->getLengthSideThree() || this->getLengthSideThree() == this->getLengthSideTwo() ? true : false;
  }
  bool isScalene(){
   return this->getLengthSideOne() != this->getLengthSideTwo() && this->getLengthSideOne() != this->getLengthSideThree() && this->getLengthSideThree() != this->getLengthSideTwo() ? true : false;
  }
};

int main(int argc, char **argv){
 // Create an object
 Triangle triangleOne(100, 100, 100);
 // Display details
 std::cout << triangleOne;
 // Operations!
 std::cout << "Is triangleOne equilateral?: " << std::boolalpha << triangleOne.isEquilateral() << std::endl;
 std::cout << "Is triangleOne isosceles?: " << std::boolalpha << triangleOne.isIsosceles() << std::endl;
 std::cout << "Is triangleOne scalene?: " << std::boolalpha << triangleOne.isScalene() << std::endl;
 std::cout << "Change all the value for the triangleOne sides!" << std::endl;
 // Setting new values!
 triangleOne.setLengthSideOne(99);
 triangleOne.setLengthSideTwo(8);
 triangleOne.setLengthSideThree(243);
 // Display new details
 std::cout << triangleOne;
 // Operations!
 std::cout << "Is triangleOne equilateral?: " << std::boolalpha << triangleOne.isEquilateral() << std::endl;
 std::cout << "Is triangleOne isosceles?: " << std::boolalpha << triangleOne.isIsosceles() << std::endl;
 std::cout << "Is triangleOne scalene?: " << std::boolalpha << triangleOne.isScalene() << std::endl;
 return 0;
}