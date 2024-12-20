/*
* Title: OOP practices Part Two
* By: Haqim Maths
* Programmed on: 2024, December 20th
*/

#include <iostream>
#include <list>
#include <algorithm>
#include <stdbool.h>
// Import own math library
#include "../Part One/HM_SimpleMath.h"

// Shortform string!
using string = std::string;

class Student{
  private:
    // Attributes
    size_t rollNumber;
    string name;
    string theClass;
    size_t marks;
    static size_t nextRollNumber;
    static std::list<Student*> studentList;
    static std::list<Student*>::iterator itStudent;
  public:
    // Constructor
    Student(string newName, string newTheClass, size_t newMarks) : rollNumber(++nextRollNumber), name(newName), theClass(newTheClass), marks(newMarks ){
      studentList.push_front(this);
      
    }
    // Details
    friend std::ostream& operator<<(std::ostream& COUT, const Student& student){
      COUT << "-----------------------------------------------" << std::endl;
      COUT << "Roll Number: " << student.getRollNumber() << std::endl;
      COUT << "Name: " << student.getName() << std::endl;
      COUT << "The class: " << student.getTheClass() << std::endl;
      COUT << "Marks: " << student.getMarks() << std::endl;
      COUT << "Grade: " << student.getGrade() << std::endl;
      COUT << "-----------------------------------------------" << std::endl;
      return COUT;
    }
    // Setters
    void setRollNumber(size_t newRollNumber){
      for(Student* student : studentList){
        if(student->getRollNumber() == newRollNumber){
          std::cout << "Cannot have roll number duplicated!" << std::endl;
        } else {
          this->rollNumber = newRollNumber;
        }
      }
    }
    void setName(string newName){
      this->name = newName;
    }
    void setTheClass(string newTheClass){
      this->theClass = newTheClass;
    }
    void setMarks(size_t newMarks){
      this->marks = newMarks;
    }
    // Getters
    size_t getRollNumber()const {
      return this->rollNumber;
    }
    string getName()const {
      return this->name;
    }
    string getTheClass()const {
      return this->theClass;
    }
    size_t getMarks()const {
      return this->marks;
    }
    // Functions
    static void showAllStudents(){
      for(itStudent = studentList.begin(); itStudent != studentList.end(); ++itStudent){
        std::cout << **itStudent << std::endl;
      }
    }
    string getGrade()const {
      switch(this->getMarks()){
        case 70 ... 100:
          return "A";
          break;
        case 65 ... 69:
          return "A-";
          break;
        case 60 ... 64:
          return "B+";
          break;
        case 50 ... 59:
          return "B";
          break;
        case 45 ... 49:
          return "C+";
          break;
        case 40 ... 44:
          return "C";
          break;
        default:
          return "F";
      }
    }
};

size_t Student::nextRollNumber = 10000;
std::list<Student*> Student::studentList;
std::list<Student*>::iterator Student::itStudent;

int main(int argc, char **argv){
  // Create objects
  Student student1("Amirah Aiz", "Computer Science", 79);
  Student student2("Thiesyendran Chandrasegeran", "Computer Forensic", 67);
  Student student3("Seertinban Vijayendran", "Computer Engineering", 43);
  Student student4("Aiman Zaidi", "Business Man", 99);
  Student student5("Sobhan Shahril", "Psychology", 65);
  // Show all students
  Student::showAllStudents();
  return 0;
}