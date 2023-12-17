
#include <iostream>

using namespace std;

class Feet {
private:
  double value;

public:
  explicit Feet(double value) : value(value) {}
  Feet() : value(0) {}

  double getValue() const { return value; }
  explicit operator double() const { return value * 0.3048; }
};

int main(int argc, char **argvp[]) {
  Feet feet(5.0);

  cout << "In meters: " << static_cast<double>(feet) << endl;

  return 0;
}