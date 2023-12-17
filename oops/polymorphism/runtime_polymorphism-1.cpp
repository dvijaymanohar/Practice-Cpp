
#include <iostream>

using namespace std;

class Shape {
public:
  virtual double compute_area() {}
};

class Circle : public Shape {
private:
  double radius;

public:
  Circle(float r) : radius(r) {}
  double compute_area() const final { return 3.14 * radius * radius; }
};

class Square : public Shape {
private:
  double side;

public:
  Square(float s) : side(s) {}
  double compute_area() const final  { return side * side; }
};

int main(int argc, char **argvp[]) {

  Circle c(10);
  Shape *p = &c;
  cout << "Circle area: " << p->compute_area() << endl;

  Square s(10);
  p = &s;
  cout << "Square area: " << p->compute_area() << endl;

  return 0;
}