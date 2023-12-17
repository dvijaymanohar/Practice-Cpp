
#include <iostream>

using namespace std;

class Vehicle {
    string make;

public:
    string model;

    void populate_make_info(string make)
    {
        this->make = make;
    }

    string get_make_info(void)
    {
        return this->make;
    }

    //virtual void get_car_details(void);
};

class Car : public Vehicle {
public:
    explicit Car(string model) {
        this->model = model;
    }

    void get_car_details(string &model, string &make) {
        model = this->model;
        make = get_make_info();
    }
};


int main(int argc , char *argvp[]) {
    Car c("Volkswagen");

    c.populate_make_info("Up");

    string make, model;
    c.get_car_details(model, make);

    cout << "Car make: " << make << endl;
    cout << "Car model: " << model << endl;

    return 0;
}