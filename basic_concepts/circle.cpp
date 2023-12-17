


#include <iostream>

using namespace std;

class circle {
    double radius;
    const double PI = 3.14;

public:
    string debug = "mode";

    // Array members cannot be initialized in a class.
    int arrr[5] = {1, 2, 3, 4, 5};

    explicit circle(double radius) : radius(radius) {}

    // Copy constructor
    circle(const circle &c) {
        this->radius = c.radius;

        cout << __FUNCTION__ << " Copy constructor called" << endl;
    }

    // Move constructor
    circle(circle && c) {
        this->radius = c.radius;
    }

    double get_radius() const { return radius; }

    void set_radius(const double radius) {
        this->radius = radius;
    }

    double get_area(void) {
        return this->PI * this->radius * this->radius;
    }
};

auto main(int argc, char *argv[]) -> int {
    (void) argc;
    (void) argv;

    circle c1(10);

    cout << "Circle area: " << c1.get_area() << endl;
    cout << c1.debug << endl;

    circle c2 = c1;
    c2.set_radius(5);

    cout << "Circle area: " << c2.get_area() << endl;
    cout << "Circle area: " << c1.get_area() << endl;

    circle c3 = c1;

    cout << "Circle area: " << c3.get_area() << endl;
    cout << "Circle area: " << c1.get_area() << endl;

    circle c4('b');
    cout << "Circle area: " << c4.get_area() << endl;

    return 0;
}