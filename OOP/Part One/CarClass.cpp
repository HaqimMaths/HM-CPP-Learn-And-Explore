/*
* Title: OOP practices Part One
* By: Haqim Maths
* Programmed on: 2024, December 19th
*/

#include <iostream>
#include <vector>
#include <algorithm>
// Import own math library
#include "HM_SimpleMath.h"

// Shortform string!
using string = std::string;

class Car{
 private:
  // Attributes
  string company;
  string model;
  size_t year;
  static std::vector<Car*> carList;
 public:
  // Constructor
  Car(string newCompany, string newModel, size_t newYear) : company(newCompany), model(newModel), year(newYear){
  }
  // Setters;
  void setCompany(string newCompany){
   this->company = newCompany;
  }
  void setModel(string newModel){
   this->model = newModel;
  }
  void setYear(size_t newYear){
   this->year = newYear;
  }
  // Getters
  string getCompany() const{
   return this->company;
  }
  string getModel() const{
   return this->model;
  }
  size_t getYear()const {
   return this->year;
  }
  // Functions
  static void showAllCars(){
   for(Car* car : carList){
    std::cout << "Company: " << car->getCompany() << " | " << "Model: " << car->getModel() << " | " << car->getYear() << std::endl;
   }
  }
  static void addCar(Car* car){
   carList.push_back(car);
  }
  static void removeCar(Car* car){
   carList.erase(std::remove(carList.begin(), carList.end(), car), carList.end()); 
  }
};

std::vector<Car*> Car::carList;

int main(int argc, char **argv){
 // Create objects
 Car carOne("Abarth", "695 ESSEESSE", 1990);
 Car carTwo("Abart", "F595", 1991);
 Car carThree("Honda", "City", 2014);
 std::cout << "Original values" << std::endl;
 Car::addCar(&carOne);
 Car::addCar(&carTwo);
 Car::addCar(&carThree);
 Car::showAllCars();
 std::cout << "Modified values" << std::endl;
 carOne.setCompany("BMW");
 carTwo.setModel("Merscedes");
 carThree.setYear(12);
 Car::showAllCars();
 return 0;
}