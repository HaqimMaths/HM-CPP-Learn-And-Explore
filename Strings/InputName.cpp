#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

int main(int argc, char **argv){
 // Declare variables
 std::string firstName;
 std::string lastName;
 std::cout << "Enter your first name: ";
 std::cin >> firstName;
 std::cout << "Enter your last name: ";
 std::cin >> lastName;
 // User name in input
 std::cout << "Your name based on your input: " << firstName << " " << lastName << std::endl;
 // To lower case
 std::cout << "Your name in lower case: " << std::endl;
 for (size_t i = 0; i < firstName.length(); i++){
  firstName[i] = std::tolower(firstName[i]);
 }
 for(size_t i = 0; i < lastName.length(); i++){
  lastName[i] = std::tolower(lastName[i]);
 }
 std::cout << firstName << " " << lastName << std::endl;
 // To upper case
 std::cout << "Your name in upper case: " << std::endl;
 for (size_t i = 0; i < firstName.length(); i++){
  firstName[i] = std::toupper(firstName[i]);
 }
 for(size_t i = 0; i < lastName.length(); i++){
  lastName[i] = std::toupper(lastName[i]);
 }
 std::cout << firstName << " " << lastName << std::endl;
 return 0;
}