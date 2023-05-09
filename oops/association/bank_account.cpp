#include <iostream>
using namespace std;

class Customer;
class AccountType;

class Customer {
private:
  string name;
  string address;
  string phone;

public:
  string getName();
  string getAddress();
  string getPhone();
};

class AccountType {
private:
  string typeName;
  double interestRate;

public:
  string getTypeName();
  double getInterestRate();
};

class BankAccount {
private:
  Customer customer;
  AccountType accountType;
  double balance;

public:
  void deposit(double amount);
  void withdraw(double amount);
  double getBalance();
};
