
#include <iostream>

using namespace std;

class Account {
private:
  double balance;

public:
  explicit Account(double balance) : balance(balance) {}

  Account &operator+=(const Account &rhs) {
    balance += rhs.balance;
    return *this;
  }

  friend Account &operator+=(Account &lhs, const double balance);
  friend ostream &operator<<(ostream &os, const Account &rhs);

  friend void displayBalance(const Account &acc);
  void display_Balance() const;
};

Account &operator+=(Account &lhs, double balance) {
  lhs.balance += balance;
  return lhs;
}

ostream &operator<<(ostream &os, const Account &rhs) {
  os << "Balance: " << rhs.balance;
  return os;
}

int main(int argc, char *argv[]) {
  (void)argc;
  (void)argv;

  std::cout << std::endl;

  Account acc1(100.0);
  Account acc2(200.0);
  acc1 += 10;
  acc2 += 20;

  Account acc3(300);

  cout << acc1 << std::endl;
  cout << acc2 << std::endl;
  cout << acc3 << std::endl;

  Account acc4(400);

  acc4 += acc1;

  cout << acc4 << std::endl;

  return 0;
}