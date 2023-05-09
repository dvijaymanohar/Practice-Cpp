#include <cstddef>
#include <iostream>
using namespace std;

// Product interface
class Product {
public:
  virtual void use() = 0;
};

// Concrete products
class ConcreteProductA : public Product {
public:
  void use() override { std::cout << "Using ConcreteProductA" << std::endl; }
};

class ConcreteProductB : public Product {
public:
  void use() override { std::cout << "Using ConcreteProductB" << std::endl; }
};

// Factory interface
class Factory {
public:
  virtual Product *createProduct() = 0;
};

// Concrete factories
class ConcreteFactoryA : public Factory {
public:
  Product *createProduct() override { return new ConcreteProductA(); }
};

class ConcreteFactoryB : public Factory {
public:
  Product *createProduct() override { return new ConcreteProductB(); }
};

int main(int argc, char **argv) {
  Factory *factory = new ConcreteFactoryA();
  Product *product = factory->createProduct();
  product->use();
}