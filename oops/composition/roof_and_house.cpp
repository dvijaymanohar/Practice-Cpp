
#include <iostream>
#include <vector>
using namespace std;

class Roof {
private:
  int height;
  int width;

public:
  int getArea();
};

class House {
private:
  Roof roof;

public:
  int getRoofArea();
};
