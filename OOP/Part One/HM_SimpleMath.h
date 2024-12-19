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
  static constexpr double PI = 3.1459;
};

double powerOf(double base, int exponent){
 double result = 1;
 for(int i = 0; i < exponent; i++){
  result = result * base;
 }
 return result;
}

#endif