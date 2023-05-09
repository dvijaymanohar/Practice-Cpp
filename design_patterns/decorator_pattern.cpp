#include <iostream>

// Component class
class Pizza {
public:
  virtual void make() = 0;
};

// Concrete component class
class Margherita : public Pizza {
public:
  void make() override { std::cout << "Making Margherita Pizza" << std::endl; }
};

// Decorator abstract class
class PizzaDecorator : public Pizza {
protected:
  Pizza *pizza;

public:
  PizzaDecorator(Pizza *pizza) : pizza(pizza) {}
  virtual void make() = 0;
};

// Concrete decorator class
class ExtraCheese : public PizzaDecorator {
public:
  ExtraCheese(Pizza *pizza) : PizzaDecorator(pizza) {}
  void make() override {
    pizza->make();
    std::cout << "Adding extra cheese" << std::endl;
  }
};

// Client code
int main() {
  Pizza *pizza1 = new Margherita();
  Pizza *pizza2 = new ExtraCheese(pizza1);

  pizza1->make();
  pizza2->make();

  delete pizza1;
  delete pizza2;

  return 0;
}
