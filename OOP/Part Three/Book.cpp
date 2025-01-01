/*
  Section: OOP
  Topic: Book class
  Author: Haqim Maths (https://github.com/HaqimMaths)
  Date: 01/01/2025
*/

#include <iostream>
#include <string>

class Book{
  public:
    std::string title;
    std::string author;
    std::string genre;
    int year;
    int price;
};

int main(int argc, char **argv){
  Book book1;
  book1.title = "The Great Gatsby";
  book1.author = "F. Scott Fitzgerald";
  book1.genre = "Novel";
  book1.year = 1925;
  book1.price = 25;
  Book book2;
  book2.title = "To Kill a Mockingbird";
  book2.author = "Harper Lee";
  book2.genre = "Novel";
  book2.year = 1960;
  book2.price = 30;
  Book book3;
  book3.title = "The Catcher in the Rye";
  book3.author = "J.D. Salinger";
  book3.genre = "Novel";
  book3.year = 1951;
  book3.price = 20;
  std::cout << book1.title << " by " << book1.author << " is a " << book1.genre << " published in " << book1.year << " and costs RM" << book1.price << std::endl;
  std::cout << book2.title << " by " << book2.author << " is a " << book2.genre << " published in " << book2.year << " and costs RM" << book2.price << std::endl;
  std::cout << book3.title << " by " << book3.author << " is a " << book3.genre << " published in " << book3.year << " and costs RM" << book3.price << std::endl;
  return 0;
}