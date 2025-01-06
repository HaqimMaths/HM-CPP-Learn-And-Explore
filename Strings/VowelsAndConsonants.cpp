/*
  Author: Haqim Maths (https://github.com/haqimmaths)
  Topic: Check if a char is a vowel or consonant
  Description: This program will check if a char is a vowel or consonant
  Date: 06/01/2025
*/

#include <iostream>
#include <cctype>
#include <cstring>

int main(int argc, char **argv){
  const char* quote = "The quick brown fox jumps over the lazy dog.";
  const char* listOfVowels = "aeiou";
  unsigned int countOfVowels = 0;
  unsigned int countOfConsonants = 0;
  unsigned int countOfAlphabets = 0;
  std::cout << "Size of quote: " << std::strlen(quote) << std::endl;
  std::cout << "The number of alphabets found: ";
  for(size_t i = 0; i < std::strlen(quote); i++){
    if(quote[i] == '\0'){
      break;
    }
    if(std::isalpha(quote[i])){
      countOfAlphabets++;
    }
  }
  std::cout << countOfAlphabets << std::endl;
  for(size_t i = 0; i < std::strlen(quote); i++){
    if(quote[i] == '\0'){
      break;
    }
    if(std::isalpha(quote[i])){
      if(std::strchr(listOfVowels, std::tolower(quote[i]))){
        countOfVowels++;
      } else if (quote[i] != ' '){
        countOfConsonants++;
      }
    }
  }
  std::cout << "Count of vowels: " << countOfVowels << std::endl;
  std::cout << "Count of consonants: " << countOfConsonants << std::endl;
}