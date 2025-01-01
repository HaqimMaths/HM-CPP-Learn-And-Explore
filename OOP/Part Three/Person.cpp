/*
  Section: OOP
  Topic: Person class
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Date: 01/01/2025
*/

#include <iostream>
#include <string>

class Person{
  public:
    std::string name;
    int age;
    std::string nationality;
};

int main(int argc, char **argv){
  Person person1;
  person1.name = "Markiplier";
  person1.age = 31;
  person1.nationality = "American";
  Person person2;
  person2.name = "Felix Kjelberg";
  person2.age = 30;
  person2.nationality = "Swedish";
  std::cout << person1.name << " is " << person1.age << " years old and is " << person1.nationality << std::endl;
  std::cout << person2.name << " is " << person2.age << " years old and is " << person2.nationality << std::endl;
  return 0;
}