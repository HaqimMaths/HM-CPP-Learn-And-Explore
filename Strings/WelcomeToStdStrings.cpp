/*
  Author: Haqim Maths (https://github.com/haqimmaths)
  Topic: Welcome to the std::strings!
  Description: Initialising and concatanate
  Date: 06/01/2025
*/

#include <iostream>
#include <string>

int main(int argc, char **argv){
  // Initialising strings!
  std::string helloWorld("Hello World", 5); // takes hello only!
  std::cout << helloWorld << std::endl;
  std::string fiveCopiesOfE(5, 'e');
  std::cout << fiveCopiesOfE << std::endl;
  std::string myName{"Haqim The Maths"};
  std::string findMaths{myName, 10, 5}; // At index 10, take 5 characters only!
  std::cout << findMaths << std::endl;
  // Concatanate strings!
  //std::string theQuoteOfTheDay{"Read Books" + "As It Was Part of Your Life"}; got error because the compiler confuse with array of chars :)
  std::string theQuote = "Read" "Books";
  std::string theQuoteTwo{std::string{"Be"} + "Independent"};
  using namespace std::string_literals; // for 's'
  std::string theQuoteThree{"Never ever"s + "give up!"};
  std::cout << theQuote << std::endl;
  std::cout << theQuoteTwo << std::endl;
  std::cout << theQuoteThree << std::endl;
  std::string theQuoteFour = "Bill Gates says: ";
  theQuoteFour.append(theQuote);
  std::cout << theQuoteFour << std::endl;
  std::string theQuoteFive(std::string{"I choose a lazy person to do hard tasks because "} + "They will solve it in easy ways!");
  std::cout << theQuoteFive << std::endl;
  return 0;
}