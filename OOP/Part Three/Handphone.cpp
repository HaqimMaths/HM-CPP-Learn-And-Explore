/*
  Section: OOP
  Topic: Handphone class
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Date: 01/01/2025
*/

#include <iostream>
#include <string>

class Handphone{
  public:
    std::string brand;
    std::string model;
    std::string colour;
    unsigned int storageSize;
    unsigned int ramSize;
    int price;
};

int main(int argc, char **argv){
  Handphone phone1;
  phone1.brand = "Apple";
  phone1.model = "iPhone 12 Pro Max";
  phone1.colour = "Pacific Blue";
  phone1.storageSize = 256;
  phone1.ramSize = 12;
  phone1.price = 5299;
  Handphone phone2;
  phone2.brand = "Samsung";
  phone2.model = "Galaxy S21 Ultra";
  phone2.colour = "Phantom Black";
  phone2.storageSize = 256;
  phone2.ramSize = 12;
  phone2.price = 5299;
  std::cout << phone1.brand << " " << phone1.model << " in " << phone1.colour << " has " << phone1.storageSize << "GB storage, " << phone1.ramSize << "GB RAM and costs RM" << phone1.price << std::endl;
  std::cout << phone2.brand << " " << phone2.model << " in " << phone2.colour << " has " << phone2.storageSize << "GB storage, " << phone2.ramSize << "GB RAM and costs RM" << phone2.price << std::endl;
  return 0;
}