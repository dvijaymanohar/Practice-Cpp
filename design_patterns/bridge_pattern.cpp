#include <iostream>

// Implementation interface
class Renderer {
public:
  virtual void renderCircle(float x, float y, float radius) = 0;
};

// Concrete implementation classes
class VectorRenderer : public Renderer {
public:
  void renderCircle(float x, float y, float radius) override {
    std::cout << "Drawing a circle with radius " << radius << " at (" << x
              << "," << y << ") using Vector Renderer" << std::endl;
  }
};

class RasterRenderer : public Renderer {
public:
  void renderCircle(float x, float y, float radius) override {
    std::cout << "Drawing a circle with radius " << radius << " at (" << x
              << "," << y << ") using Raster Renderer" << std::endl;
  }
};

// Abstraction interface
class Shape {
protected:
  Renderer *renderer;

public:
  Shape(Renderer *renderer) : renderer(renderer) {}
  virtual void draw() = 0;
  virtual void resize(float factor) = 0;
};

// Concrete abstraction classes
class Circle : public Shape {
private:
  float x, y, radius;

public:
  Circle(Renderer *renderer, float x, float y, float radius)
      : Shape(renderer), x(x), y(y), radius(radius) {}

  void draw() override { renderer->renderCircle(x, y, radius); }

  void resize(float factor) override { radius *= factor; }
};

// Client code
int main() {
  Renderer *vectorRenderer = new VectorRenderer();
  Renderer *rasterRenderer = new RasterRenderer();

  Circle *vectorCircle = new Circle(vectorRenderer, 5, 10, 20);
  Circle *rasterCircle = new Circle(rasterRenderer, 10, 20, 30);

  vectorCircle->draw();
  vectorCircle->resize(2);
  vectorCircle->draw();

  rasterCircle->draw();
  rasterCircle->resize(1.5);
  rasterCircle->draw();

  delete vectorRenderer;
  delete rasterRenderer;
  delete vectorCircle;
  delete rasterCircle;

  return 0;
}
