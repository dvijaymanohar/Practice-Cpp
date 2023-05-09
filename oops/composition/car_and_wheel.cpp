
#include <iostream>
#include <vector>
using namespace std;

class Wheel {
private:
  int diameter;

public:
  int getDiameter();
};

class Car {
private:
  Wheel frontLeft;
  Wheel frontRight;
  Wheel rearLeft;
  Wheel rearRight;

public:
  int getTotalWheelDiameter();
};
