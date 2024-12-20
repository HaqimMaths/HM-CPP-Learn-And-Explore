/*
* Title: OOP practices Part Two
* By: Haqim Maths
* Programmed on: 2024, December 20th
*/

#include <iostream>
#include <vector>
#include <algorithm>
// Import own math library
#include "../Part One/HM_SimpleMath.h"

// Shortform string!
using string = std::string;

class Employee{
 private:
  // Attributes
  size_t id;
  string firstName;
  string lastName;
  double salary;
  double latestPerformancePercentage;
  static size_t nextId;
  static std::vector<Employee*> employeeList;
 public:
  // Constructors
  Employee(string newFirstName, string newLastName, double newSalary) : id(nextId++), firstName(newFirstName), lastName(newLastName), salary(newSalary), latestPerformancePercentage(0) {
   employeeList.push_back(this);
  }
  Employee(string newFirstName, string newLastName) : Employee(newFirstName, newLastName, -1) {}
  Employee(string newFirstName) : Employee(newFirstName, "Unknown") {}
  Employee() : Employee("null"){}
  // Details
  friend std::ostream& operator<<(std::ostream& COUT, const Employee& employee){
   COUT << "ID: " << employee.getId() << " | Name: " << employee.getFullName() << " | Salary: " << employee.getSalary() << " | Latest performance percentage: " << employee.getLatestPerformancePercentage() << "%" << std::endl;
   return COUT;
  }
  // Setters
  void setId(size_t newId){
   for(Employee* employee : employeeList){
    if(employee->getId() == newId){
     std::cout << "Cannot assign duplicated ID!" << std::endl;
    } else {
     this->id = newId;
     break;
    }
   }
  }
  void setFirstName(string newFirstName){
   this->firstName = newFirstName;
  }
  void setLastName(string newLastName){
   this->lastName = newLastName;
  }
  void setSalary(double newSalary){
   this->salary = newSalary;
  }
  void setLatestPerformancePercentage(double newLatestPerformancePercentage){
   this->latestPerformancePercentage = newLatestPerformancePercentage;
  }
  // Getters
  size_t getId()const {
   return this->id;
  }
  string getFirstName()const {
   return this->firstName;
  }
  string getLastName()const {
   return this->lastName;
  }
  string getFullName()const {
   return this->getFirstName() + " " + this->getLastName();
  }
  double getSalary()const {
   return this->salary;
  }
  double getLatestPerformancePercentage()const {
   return this->latestPerformancePercentage;
  }
  // Functions
  static void showAllEmployees(){
   for(Employee* employee : employeeList){
    std::cout << *employee;
   }
  }
  static void removeEmployee(Employee* employee){
   employeeList.erase(std::remove(employeeList.begin(), employeeList.end(), employee), employeeList.end());
  }
  void raiseSalary(){
   if(this->getLatestPerformancePercentage() <= 0){
    std::cout << "Cannot raise due to negative performance!" << std::endl;
   } else {
    this->salary = this->salary + this->salary * this->getLatestPerformancePercentage() / 100;
   }
  }
};

std::vector<Employee*> Employee::employeeList;
size_t Employee::nextId;

int main(int argc, char **argv){
 // Create objects of Employee class
 Employee employee0("Harish", "Waran", 5400);
 Employee employee1("Thiesyendran", "Vijayendran");
 Employee employee2("Parveena");
 // Display employees
 std::cout << "Before: " << std::endl;
 Employee::showAllEmployees();
 // Modification values
 employee0.setLatestPerformancePercentage(19);
 employee0.raiseSalary();
 employee1.setSalary(1921);
 employee1.setLatestPerformancePercentage(192);
 employee1.raiseSalary();
 employee2.setLastName("Pritiheipi");
 employee2.setSalary(1021);
 employee2.setLatestPerformancePercentage(12);
 employee2.raiseSalary();
 // New values
 std::cout << "After: " << std::endl;
 Employee::showAllEmployees();
 return 0;
}