/*
* Title: OOP practices Part Two
* By: Haqim Maths
* Programmed on: 2024, December 20th
*/

#include <iostream>
#include <cmath>
// Import own math library
#include "../Part One/HM_SimpleMath.h"

// Shortform string!
using string = std::string;

class Shape{
  public:
    virtual double calculateArea() const = 0;
    virtual double calculatePerimeter() const = 0;
};

class Circle : public Shape{
  private:
    // Attributes
    double radius;
  public:
    // Constructor
    Circle(double newRadius) : radius(newRadius){
      
    }
    // Get details
    friend std::ostream& operator<<(std::ostream& COUT, const Circle& circle){
      COUT << "--------------------Circle----------------------" << std::endl;
      COUT << "Radius: " << circle.getRadius() << std::endl;
      COUT << "Area: " << circle.calculateArea() << std::endl;
      COUT << "Perimeter: " << circle.calculatePerimeter() << std::endl;
      COUT << "-----------------------------------------------" << std::endl;
      return COUT;
    }
    // Functions
    double calculateArea() const override{
      return HMath::PI * HMath::powerOf(this->getRadius(), 2);
    }
    double calculatePerimeter() const override{
      return 2 * HMath::PI * this->getRadius();
    }
    // Setter
    void setRadius(double newRadius){
      this->radius = newRadius;
    }
    // Getter
    double getRadius()const {
      return this->radius;
    }
};

class Rectangle : public Shape{
  private:
    double length;
    double width;
  public:
    // Constructor
    Rectangle(double newLength, double newWidth) : length(newLength), width(newWidth){

    }
    // Details
    friend std::ostream& operator<<(std::ostream& COUT, const Rectangle& rectangle){
      COUT << "------------------Rectangle-----------------------" << std::endl;
      COUT << "Length and width: " << rectangle.getLength() << " & " << rectangle.getWidth() << std::endl;
      COUT << "Area: " << rectangle.calculateArea() << std::endl;
      COUT << "Perimeter: " << rectangle.calculatePerimeter() << std::endl;
      COUT << "-----------------------------------------------" << std::endl;
      return COUT;
    }
    // Setters
    void setLength(double newLength){
      this->length = length;
    }
    void setWidth(double newWidth){
      this->width = width;
    }
    // Getters
    double getLength()const {
      return this->length;
    }
    double getWidth()const {
      return this->width;
    }
    // Functions
    double calculateArea() const override{
      return this->getLength() * this->getWidth();
    }
    double calculatePerimeter() const override{
      return 2 * (this->getLength() + this->getWidth());
    }
};

class Triangle : public Shape{
  private:
    // Attributes
    double sideOne;
    double sideTwo;
    double sideThree;
  public:
    // Constructor
    Triangle(double newSideOne, double newSideTwo, double newSideThree) : sideOne(newSideOne), sideTwo(newSideTwo), sideThree(newSideThree){

    }
    // Details
    friend std::ostream& operator<<(std::ostream& COUT, const Triangle& triangle){
      COUT << "------------------Traingle------------------------" << std::endl;
      COUT << "Side 1, 2, and 3: " << triangle.getSideOne() << " & " << triangle.getSideTwo() << " & " << triangle.getSideThree() << std::endl;
      COUT << "Area: " << triangle.calculateArea() << std::endl;
      COUT << "Perimeter: " << triangle.calculatePerimeter() << std::endl;
      COUT << "-----------------------------------------------" << std::endl;
      return COUT;
    }
    // Setters
    void setSideOne(double newSideOne){
      this->sideOne = newSideOne;
    }
    void setSideTwo(double newSideTwo){
      this->sideTwo = newSideTwo;
    }
    // Getters
    double getSideOne()const {
      return this->sideOne;
    }
    double getSideTwo()const {
      return this->sideTwo;
    }
    double getSideThree()const {
      return this->sideThree;
    }
    // Functions
    double calculateArea() const override{
      double semiPerimeter = (this->getSideOne() + this->getSideTwo() + this->getSideThree()) / 2;
      return sqrt(semiPerimeter * (semiPerimeter - this->getSideOne()) * (semiPerimeter - this->getSideTwo()) * (semiPerimeter * this->getSideThree()));
    }
    double calculatePerimeter() const override{
      return this->getSideOne() + this->getSideTwo() + this->getSideThree();
    }
};

int main(int argc, char **argv){
  std::cout << "Date today: " << __DATE__ << std::endl;
  // Create objects of classes;
  Shape* shapeOne = new Circle(109.12);
  Shape* shapeTwo = new Rectangle(19, 12.1);
  Shape* shapeThree = new Triangle(20, 21.9, 17);
  // Get information
  std::cout << *dynamic_cast<Circle*>(shapeOne);
  std::cout << *dynamic_cast<Rectangle*>(shapeTwo);
  std::cout << *dynamic_cast<Triangle*>(shapeThree);
  // Get radius from circle by dynamic cast
  Circle* circleOne = dynamic_cast<Circle*>(shapeOne);
  std::cout << circleOne->getRadius() << std::endl;
  delete shapeOne; // will also delete circleOne
  delete shapeTwo;
  delete shapeThree;
  return 0;
}