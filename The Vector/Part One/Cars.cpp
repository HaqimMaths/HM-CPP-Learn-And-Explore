/*
  Section: Vector
  Topic: Create a list of cars
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Date: 1/1/2025
*/

#include <iostream>
#include <string>
#include <vector>

class Car{
  private:
    // Attributes
    std::string name;
    unsigned int yearCreated;
    static std::vector<Car> listOfCars;
  public:
    // Constructors
    Car(std::string newName, unsigned int newYearCreated) : name(newName), yearCreated(newYearCreated){
      listOfCars.push_back(*this);
    }
    Car(std::string newName) : Car(newName, 9999){}
    // Setters
    void setName(std::string newName){
      this->name = newName;
    }
    void setYearCreated(unsigned int newYearCreated){
      this->yearCreated = newYearCreated;
    }
    // Getters
    std::string getName()const {
      return this->name;
    }
    unsigned int getYearCreated()const {
      return this->yearCreated;
    }
    // Get Detail
    friend std::ostream& operator<<(std::ostream& COUT, const Car& car){
      COUT << "Name: " << car.getName() << std::endl;
      COUT << "Year created: " << car.getYearCreated() << std::endl;
      return COUT;
    }
    // Get list of cars
    static void getListOfCars(){
      for(const Car& car : listOfCars){
        std::cout << car;
      }
    }
};

std::vector<Car> Car::listOfCars;

int main(int argc, char **argv){
  // Create objects
  Car car1("Ferrari", 2000);
  Car car2("Lamborghini", 2010);
  // Display list of cars
  Car::getListOfCars();
  return 0;
}