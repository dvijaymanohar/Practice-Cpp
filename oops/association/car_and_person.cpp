#include <iostream>

using namespace std;

class Person {
private:
  string name;
  unsigned int age;

public:
  Person(string name, unsigned int age = 0) : name(name), age(age) {}
  void setName(string name) { this->name = name; }
  void setAge(unsigned int age) { this->age = age; }
  string &getName() { return name; }
};

class Car {
private:
  string model;
  Person *owner;

public:
  Car(string model, Person *owner) : model(model), owner(owner) {}

  void setModel(string model) { this->model = model; }
  void setOwner(Person *owner) { this->owner = owner; }
  string &getModel() { return model; }

  Person *getOwner() { return owner; }
};

int main(int argc, char **argv) {
  Person person1("Vijay", 37);
  Car car1("Vokswagen", &person1);

  cout << "Car owner's name is " << car1.getOwner()->getName() << endl;

  return 0;
}