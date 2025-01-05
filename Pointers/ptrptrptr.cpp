#include <iostream>

int main(int argc, char **argv){
 char* ptr = nullptr;
 char a = 'A';
 ptr = &a;
 std::cout << ptr << " " << *ptr << std::endl;
 std::cout << &a << std::endl;
 char name[] = "Harish Haqim";
 const char *myName = nullptr;
 myName = &name;
 std::cout << myName << " " << *myName << std::endl;
 return 0;
 //std::cin.get();
}