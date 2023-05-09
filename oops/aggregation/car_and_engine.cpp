#include <iostream>
#include <vector>
using namespace std;

class Engine {
private:
  double horsepower;
  double torque;

public:
  double getHorsepower();
  double getTorque();
};

class Car {
private:
  string make;
  string model;
  Engine *engine;

public:
  string getMake();
  string getModel();
  Engine *getEngine();
};
