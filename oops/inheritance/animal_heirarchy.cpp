#include <iostream>
#include <vector>
using namespace std;

class Animal {
protected:
  int age;
  string name;

public:
  Animal(int age, const string &name) : age(age), name(name) {}
  virtual void makeSound() = 0;
};

class Dog : public Animal {
public:
  Dog(int age, const string &name) : Animal(age, name) {}
  virtual void makeSound() override {}
};

class Cat : public Animal {
public:
  Cat(int age, const string &name) : Animal(age, name) {}
  virtual void makeSound() override {}
};

int main(int argc, char **argv) {
  Cat c(5, "Tommy");

  return 0;
}