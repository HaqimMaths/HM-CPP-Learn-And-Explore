/*
* Title: OOP practices Part One
* By: Haqim Maths
* Programmed on: 2024, December 19th
*/

#include <iostream>
#include <vector>
// Import own math library
#include "HM_SimpleMath.h"

// Shortform string!
using string = std::string;

class Person{
 private:
  // Attributes
  string name;
  unsigned int age;
  string country;
  static std::vector<Person*> personList;
 public:
  // Constructor
  Person(string newName, unsigned int newAge, string newCountry) : name(newName), age(newAge), country(newCountry){
   personList.push_back(this);
  }
  // Setter
  void setName(string newName){
   this->name = newName;
  }
  void setAge(unsigned int newAge){
   this->age = newAge;
  }
  void setCountry(string newCountry){
   this->country = newCountry;
  }
  // Getter
  string getName(){
   return this->name;
  }
  unsigned int getAge(){
   return this->age;
  }
  string getCountry(){
   return this->country;
  }
  // Methods
  static void getAllPerson(){
   for(Person* person : personList){
    std::cout << "Name: " << person->getName() << " | " << "Age: " << person->getAge() << " | " << "Country: " << person->getCountry() << std::endl;
   }
  }
};

std::vector<Person*> Person::personList;

int main(int argc, char **argv){
 // Create an object
 Person personOne("Agnes Larsson", 29, "Sweeden");
 Person personTwo("Markus Persson", 39, "Sweden");
 Person personThree("Bill Gates", 60, "USA");
 Person::getAllPerson();
 personOne.setCountry("Italy");
 personTwo.setName("Jeb Bergensten");
 personThree.setAge(100);
 Person::getAllPerson();
 return 0;
}