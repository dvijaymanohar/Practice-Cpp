
#include <iostream>

using namespace std;

class Country {
  string name;
  unsigned long long population;

public:
  Country(string name, unsigned long long population)
      : name(name), population(population) {}
  string getName() { return name; }
  unsigned long long getPopulation() { return population; }
  void setName(string name) { this->name = name; }
  void setPopulation(unsigned long long population) {
    this->population = population;
  }
};

class Person {
  string name;
  Country *country;

public:
  Person(string name, Country *country) : name(name), country(country) {}
  string getName() { return name; }
  Country *getCountry() { return country; }
  void get_info(void) {
    cout << "Name: " << name << endl;
    cout << "Country: " << country->getName() << endl;
  }
};

int main(int argc, char *argv[]) {
  Country land("Netherlands", 17);
  Person john("John", &land);
  john.get_info();
  return 0;
}