#include <iostream>

using namespace std;

class Engine {
  double engine_capacity;

public:
  Engine(double capacity) : engine_capacity(capacity) {}
  double get_capacity() { return engine_capacity; }
  void set_capacity(double capacity) { engine_capacity = capacity; }
};

class Tyres {
  short no_of_tyres;

public:
  Tyres(short tyre_num) : no_of_tyres(tyre_num) {}
  short get_no_of_tyres() { return no_of_tyres; }
  void set_no_of_tyres(short tyre_num) { no_of_tyres = tyre_num; }
};

class Doors {
  short no_of_doors;

public:
  Doors(short door_num) : no_of_doors(door_num) {}
  short get_no_of_doors() { return no_of_doors; }
  void set_no_of_doors(short door_num) { no_of_doors = door_num; }
};

class Car {
  Engine engine_obj;
  Tyres tyres_obj;
  Doors doors_obj;
  string color;

public:
  Car(Engine engine, Tyres tyres, Doors doors, string color)
      : engine_obj(engine), tyres_obj(tyres), doors_obj(doors), color(color) {}
  string get_color() { return color; }
  void set_color(string color) { this->color = color; }
  void print_car_info() {
    cout << "Engine: " << engine_obj.get_capacity() << endl;
    cout << "Tyres: " << tyres_obj.get_no_of_tyres() << endl;
    cout << "Doors: " << doors_obj.get_no_of_doors() << endl;
    cout << "Color: " << color << endl;
  }
};

int main(int argc, char const *argv[]) {
  (void)argc;
  (void)argv;

  Engine engine_obj(100.00);
  Tyres tyres_obj(4);
  Doors doors_obj(5);
  Car car_obj(engine_obj, tyres_obj, doors_obj, "White");
  car_obj.print_car_info();

  return 0;
}