/*
* Title: OOP practices Part Two
* By: Haqim Maths
* Programmed on: 2024, December 20th
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <stdbool.h>
// Import own math library
#include "../Part One/HM_SimpleMath.h"

// Shortform string!
using string = std::string;

class Date{
 private:
  // Attributes
  size_t day, month, year;
  static std::vector<Date*> dateList;
 public:
  // Constructor
  Date(size_t newDay, size_t newMonth, size_t newYear) : day(newDay), month(newMonth), year(newYear){
   dateList.push_back(this);
  }
  // Details
  friend std::ostream& operator<<(std::ostream& COUT, const Date& date){
   COUT << date.getDay() << "/" << date.getMonth() << "/" << date.getYear() << std::endl;
   return COUT;
  }
  // Setters
  void setDay(size_t newDay){
   this->day = newDay;
  }
  void setMonth(size_t newMonth){
   this->month = newMonth;
  }
  void setYear(size_t newYear){
   this->year = newYear;
  }
  // Getters
  size_t getDay()const {
   return this->day;
  }
  size_t getMonth()const {
   return this->month;
  }
  size_t getYear()const {
   return this->year;
  }
  // Functions
  bool isLeapYear(){
    if(this->getYear() > HMath::MAX_YEAR || this->getYear() < HMath::MIN_YEAR){
      return false;
    } else {
      if(this->getYear() % 4 == 0){
        if(this->getYear() % 100 == 0){
          if(this->getYear() % 400 == 0){
            return true; // Leap year!
          } else {
            return false;
          }
        } else {
          return true; // Leap year!
        }
      } else {
        return false;
      }
    }
  }
  bool isDateValid(){
    if(this->getYear() > HMath::MAX_YEAR || this->getYear() < HMath::MIN_YEAR || this->getMonth() > HMath::MAX_MONTH || this->getMonth() < HMath::MIN_MONTH || this->getDay() > HMath::MAX_DAY || this->getDay() < HMath::MIN_DAY){
      return false;
    } else {
      if(this->getMonth() == 2){
        if(this->isLeapYear() == true){
          if(this->getDay() <= 29){
            return true;
          } else {
            return false;
          }
        } else {
          if(this->getDay() <= 28){
            return true;
          } else {
            return false;
          }
        }
      } else if(this->getMonth() == 1 || this->getMonth() == 3 || this->getMonth() == 5 || this->getMonth() == 7 || this->getMonth() == 8 || this->getMonth() == 10 || this->getMonth() == 12){
        if(this->getDay() <= 31){
          return true;
        } else {
          return false;
        }
      } else {
        if(this->getDay() <= 30){
          return true;
        } else {
          return false;
        }
      }
    }
  }
  static void showAllDates(){
    for(Date* date : dateList){
      std::cout << *date;
    }
  }
};

std::vector<Date*> Date::dateList;

int main(int argc, char **argv){
 // Create objects of Date class!
 Date date0(20, 10, 2000);
 Date date1(10, 9, 1997);
 Date date2(21, 2, 1989);
 // Check valid date and leap year
 std::cout << "Is " << date0 << " a valid date?: " << std::boolalpha << date0.isDateValid() << " and leap year?: " << date0.isLeapYear() << std::endl;
 std::cout << "Is " << date1 << " a valid date?: " << std::boolalpha << date1.isDateValid() << " and leap year?: " << date1.isLeapYear() << std::endl;
 std::cout << "Is " << date2 << " a valid date?: " << std::boolalpha << date2.isDateValid() << " and leap year?: " << date2.isLeapYear() << std::endl;
 // Display all dates!
 Date::showAllDates();
 return 0;
}