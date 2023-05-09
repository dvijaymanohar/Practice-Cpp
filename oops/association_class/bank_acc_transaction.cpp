#include <iostream>
#include <string>

using namespace std;

class BankAccount;

class Transaction {
private:
  BankAccount *fromAccount;
  BankAccount *toAccount;
  double amount;

public:
  Transaction(BankAccount *fromAccount, BankAccount *toAccount, double amount);
};

class BankAccount {
private:
  double balance;

public:
  BankAccount(double balance);
};
