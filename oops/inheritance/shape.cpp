#include <iostream>
#include <vector>
using namespace std;

class Shape {
protected:
  int x;
  int y;

public:
  /* This is a pure virtual function, getArea(), which is defined as a virtual
   * function with no implementation (i.e., it is set to 0).
   */
  virtual float getArea() = 0;
};

class Rectangle : public Shape {
private:
  int width;
  int height;

public:
  Rectangle(int width, int height) {
    this->width = width;
    this->height = height;
  }

  /**
   * The Rectangle class also overrides the getArea() function that was declared
   * as a pure virtual function in the Shape class. The override keyword is used
   * to indicate that this function is an implementation of the virtual function
   * in the base class.
   *
   * @return int
   */
  virtual float getArea() override;
};

class Circle : public Shape {
private:
  int radius;

public:
  Circle(int radius) { this->radius = radius; }

  virtual float getArea() override { return 3.14 * radius * radius; }
};

int main(int argc, char *argv[]) {
  Circle c(3);

  cout << "Area of cicle: " << c.getArea() << endl;

  return 0;
}
