#include <iostream>
using namespace std;

class Shape {
public:
  virtual void draw() = 0;
  virtual ~Shape() {}
};

class Rectangle {
public:
  int width;
  int height;
  Rectangle(int w, int h) : width(w), height(h) {}
  int area() { return width * height; }
};

class RectangleAdapter : public Shape {
private:
  Rectangle *rectangle;

public:
  RectangleAdapter(Rectangle *r) : rectangle(r) {}
  virtual void draw() override {
    cout << "Drawing a rectangle of area " << rectangle->area() << endl;
  }
};

int main() {
  Rectangle rect(5, 10);
  Shape *shape = new RectangleAdapter(&rect);
  shape->draw();
  delete shape;
  return 0;
}
