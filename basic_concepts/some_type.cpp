#include <iostream>

using namespace std;

class SomeType {
public:
  SomeType() = default;
  SomeType(int n) { cout << "Parametrized constructor called" << endl; }

  // explicit copy constructor
  explicit SomeType(const SomeType &) = default;

  virtual ~SomeType() = default;
};

int main(int argc, char *argvp[]) {
  SomeType s1;
  SomeType s2(2);
  SomeType s3(s2);

  return 0;
}