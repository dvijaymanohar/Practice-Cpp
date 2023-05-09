#include <iostream>
#include <vector>
using namespace std;
class Vehicle {
protected:
  int numWheels;

public:
  Vehicle(int numWheels);
  virtual void drive() = 0;
};

class Car : public Vehicle {
public:
  Car();
  virtual void drive() override;
};

class Motorcycle : public Vehicle {
public:
  Motorcycle();
  virtual void drive() override;
};
