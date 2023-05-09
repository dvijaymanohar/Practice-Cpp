#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Component;

class Computer {
private:
  vector<Component *> components;

public:
  Computer(){};
  void addComponent(Component *component) { components.push_back(component); }
};

class Component {
private:
  string name;
  double price;
  string componentType;

public:
  Component(string name, double price, string componentType)
      : name(name), price(price), componentType(componentType) {}
  string getName() { return name; }
  double getPrice();
};
