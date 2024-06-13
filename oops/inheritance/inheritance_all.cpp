// C++ Code generated from Python Code:
#include <iostream>
#include <string>

using namespace std;

// Base class (Parent)
class Vehicle {
private:
  string name;
  string model;

public:
  Vehicle(string name, string model) {
    this->name = name;
    this->model = model;
  }
  void getName() {
    cout << "The car is a " << this->name << " " << this->model;
  }
};

// Single inheritance
// FuelCar class extending from Vehicle class
// Derived class (Child)
class FuelCar : public Vehicle {
private:
  string combustType;

public:
  FuelCar(string name, string model, string combustType)
      : Vehicle(name, model) {
    this->combustType = combustType;
  }
  void getFuelCar() {
    Vehicle::getName();
    cout << ", combust type is " << this->combustType;
  }
};

// Hierarchical inheritance
// Alongside the FuelCar class, the ElectricCar class is also extending from
// Vehicle class Another Derived class (Child)
class ElectricCar : public Vehicle {
private:
  string batteryPower;

public:
  ElectricCar(string name, string model, string batteryPower)
      : Vehicle(name, model) {
    this->batteryPower = batteryPower;
  }
  void getElectricCar() {
    Vehicle::getName();
    cout << ", battery power is " << this->batteryPower;
  }
};

// Multi-level inheritance
// GasolineCar class is derived from the FuelCar class, which is further derived
// from the Vehicle class Derived class (Grandchild)
class GasolineCar : public FuelCar {
private:
  string gasCapacity;

public:
  GasolineCar(string name, string model, string combustType, string gasCapacity)
      : FuelCar(name, model, combustType) {
    this->gasCapacity = gasCapacity;
  }
  void getGasolineCar() {
    FuelCar::getFuelCar();
    cout << ", gas capacity is " << this->gasCapacity;
  }
};

// Multiple inheritance
// The HybridCar class is derived from two different classes, The GasolineCar
// class and the ElectricCar class Derived class
class HybridCar : public GasolineCar, public ElectricCar {
private:
  string batteryPower;

public:
  HybridCar(string name, string model, string combustType, string batteryPower)
      : GasolineCar(name, model, combustType, batteryPower),
        ElectricCar(name, model, batteryPower) {
    this->batteryPower = batteryPower;
  }
  void getHybrid() {
    FuelCar::getFuelCar();
    cout << ", battery power is " << this->batteryPower;
  }
};

// main
int main() {
  cout << "Single inheritance:" << endl;
  FuelCar Fuel("Honda", "Accord", "Petrol");
  Fuel.getFuelCar();
  cout << endl << " " << endl;

  cout << "Hierarchical inheritance:" << endl;
  ElectricCar Electric("Tesla", "ModelX", "200MWH");
  Electric.getElectricCar();
  cout << endl << " " << endl;

  cout << "Multi-level inheritance:" << endl;
  GasolineCar Gasoline("Honda", "Accord", "Petrol", "30 liters");
  Gasoline.getGasolineCar();
  cout << endl << " " << endl;

  cout << "Multiple inheritance:" << endl;
  HybridCar Hybrid("Toyota", "Prius", "Hybrid", "100MWH");
  Hybrid.getHybrid();
  cout << endl << " " << endl;
  return 0;
}