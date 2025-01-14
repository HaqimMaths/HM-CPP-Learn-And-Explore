/*
* Title: OOP practices Part One
* This is my simple math header!
* By: Haqim Maths
* Programmed on: 2024, December 19th
*/

#ifndef HM_SIMPLEMATH_H
#define HM_SIMPLEMATH_H

class HMath{
 public:
  // Math constants
  static constexpr double PI = 3.1459;
  // Date constants
  static constexpr size_t MAX_YEAR = 9999;
  static constexpr size_t MIN_YEAR = 0;
  static constexpr size_t MAX_MONTH = 12;
  static constexpr size_t MIN_MONTH = 1;
  static constexpr size_t MAX_DAY = 31;
  static constexpr size_t MIN_DAY = 1;
  static double powerOf(double base, int exponent){
    double result = 1;
    for(int i = 0; i < exponent; i++){
      result = result * base;
    }
    return result;
  }
};

#endif
