

#include "iostream"

using namespace std;

class Account {
protected:
  float balance;

public:
  Account(float balance) : balance(balance) {}
  virtual void Withdraw(float amount) = 0;
  virtual void Deposit(float amount) = 0;
  virtual void printBalance() = 0;
};

class Savings : public Account {
private:
  float interest_rate;

public:
  Savings(float balance) : Account(balance) { interest_rate = 0.8; }

  void Withdraw(float amount) override {
    balance -= amount + (amount * interest_rate);
  }

  void Deposit(float amount) override { balance += amount + (amount * 0.8); }

  void printBalance() override {
    cout << "Account balance: " << balance << endl;
  }
};

class Current : public Account {
public:
  Current(float balance) : Account(balance) {}

  void Withdraw(float amount) override { balance -= amount; }

  void Deposit(float amount) override { balance += amount; }

  void printBalance() override {
    cout << "Account balance: " << balance << endl;
  }
};

int main() {

  Savings s1(50000);
  Account *acc = &s1;
  acc->Deposit(1000);
  acc->printBalance();

  acc->Withdraw(3000);
  acc->printBalance();

  Current c1(50000);
  acc = &c1;
  acc->Deposit(1000);
  acc->printBalance();

  acc->Withdraw(3000);
  acc->printBalance();
  return 0;
}