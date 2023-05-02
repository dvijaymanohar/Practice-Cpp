#include <iostream>

using namespace std;

class Vehicle {
private:
  const string class_type = "Parent";

protected:
  string manufacturer;
  int year;            // Year of release
  string name;         // Model/Name of the Vehicle
  string vehicle_type; // Land, Water, Air

public:
  Vehicle() { cout << "Vehicle class default constructor called" << endl; }

  ~Vehicle() { cout << "Vehicle class destructor called" << endl; }

  Vehicle(string manufacturer, int year, string name, string type) {
    cout << "Vehicle class parameterised constructor called" << endl;
    this->manufacturer = manufacturer;
    this->year = year;
    this->name = name;
    this->vehicle_type = type;
  }

  // Vehicle(const Vehicle &) = default;
  virtual void display_vehicle_details(void) {
    std::cout << "Manufacturer: " << manufacturer << endl;
    std::cout << "Year of made: " << year << endl;
    std::cout << "Model : " << name << endl;
    std::cout << "Vehicle type: " << vehicle_type << endl;
    std::cout << "Class type: " << class_type << endl;
  }
};

class Car : public Vehicle {
private:
  int no_of_doors;

public:
  Car() { cout << "Car class default constructor called\n"; }

  ~Car() { cout << "Car class destructor called" << endl; }

  Car(string manufacturer, int year, string name, string type, int doors) {
    cout << "Car class parameterised constructor called\n";
    this->manufacturer = manufacturer;
    this->year = year;
    this->name = name;
    this->vehicle_type = type;
    this->no_of_doors = doors;
  };

  void display_vehicle_details(void) {
    std::cout << "Car class version" << endl;
    std::cout << "Manufacturer: " << manufacturer << endl;
    std::cout << "Year of made: " << year << endl;
    std::cout << "Model : " << name << endl;
    std::cout << "Vehicle type: " << vehicle_type << endl;
    std::cout << "No. of doors: " << no_of_doors << endl;
  }
};

class Boat : public Vehicle {
private:
  string boat_type; // Passenger or luggage carrier
public:
  Boat() = default;
  Boat(string manufacturer, int year, string name, string type,
       string boat_type) {
    this->manufacturer = manufacturer;
    this->year = year;
    this->name = name;
    this->vehicle_type = type;
    this->boat_type = boat_type;
  };
};

int main(int argc, char *argv[]) {
  Car c1("Vokswagen", 2018, "Up", "Hatchback", 5);
  Vehicle *v1 = &c1;

  v1->display_vehicle_details();
  return 0;
}
