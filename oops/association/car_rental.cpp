#include <iostream>
#include <vector>
using namespace std;

class Car {
private:
  string make;
  string model;
  int year;
  bool available;

public:
  bool isAvailable();
  void setAvailable(bool available);
};

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

class Rental {
private:
  Car car;
  Customer customer;
  int days;
  double price;

public:
  double calculatePrice();
};
