/*
* Title: OOP practices Part One
* By: Haqim Maths
* Programmed on: 2024, December 19th
*/

#include <iostream>
#include <vector>
#include <algorithm>
// Import own math library
#include "HM_SimpleMath.h"

// Shortform string!
using string = std::string;

class BankAccount{
 private:
  // Attributes
  string accountNumber;
  double balance;
  static std::vector<BankAccount*> bankAccountList;
 public:
  // Constructors
  BankAccount(string newAccountNumber, double newBalance) : accountNumber(newAccountNumber), balance(newBalance){
   bankAccountList.push_back(this);
  }
  BankAccount(string newAccountNumber) : BankAccount(newAccountNumber, -1){}
  BankAccount() : BankAccount("0000", -1){}
  // Setters
  void setAccountNumber(string newAccountNumber){
   this->accountNumber = newAccountNumber;
  }
  void setBalance(double newBalance){
   this->balance = newBalance;
  }
  // Getters
  string getAccountNumber(){
   return this->accountNumber;
  }
  double getAccountBalance(){
   return this->balance;
  }
  // Functions
  void deposit(double total){
   this->balance += total;
  }
  void withdraw(double total){
   if(this->balance < 1){
    std::cout << "Cannot withdraw zero and negative balances!" << std::endl;
   } else if(total < 1){
    std::cout << "Cannot take out zero value money and negative values money!";
   } else {
    this->balance -= total;
   }
  }
  void addBankAccount(BankAccount* bankAccount){
   bankAccountList.push_back(bankAccount);
  }
  void removeBankAccount(BankAccount* bankAccount){
   bankAccountList.erase(std::remove(bankAccountList.begin(), bankAccountList.end(), bankAccount), bankAccountList.end()); 
  }
  static void showAllBankAccounts(){
   size_t index = 0;
   for(BankAccount* bankAccount : bankAccountList){
    ++index;
    std::cout << "[" << index << "]" << "Account Number: " << bankAccount->getAccountNumber() << " | " << bankAccount->getAccountBalance() << std::endl;
   }
  }
};

std::vector<BankAccount*> BankAccount::bankAccountList;

int main(int argc, char **argv){
 BankAccount bankAccountOne("1999-1221-8291", 1909.12);
 BankAccount bankAccountTwo("1992-1212-1002");
 BankAccount bankAccountThree;
 std::cout << "Original values :) " << std::endl;
 BankAccount::showAllBankAccounts();
 std::cout << "Modified values" << std::endl;
 bankAccountOne.deposit(991221);
 bankAccountOne.setAccountNumber("912839021381");
 bankAccountTwo.withdraw(888);
 bankAccountTwo.setBalance(100000);
 bankAccountThree.setBalance(91919292);
 bankAccountThree.withdraw(9128291);
 BankAccount::showAllBankAccounts();

 return 0;
}