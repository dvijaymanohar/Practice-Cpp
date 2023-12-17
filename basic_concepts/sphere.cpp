
#include <iostream>
#include <cmath>

using namespace std;

class Sphere {
    double radius;
    const double density;
    const double PI = 3.14;

public:
    explicit Sphere(const double radius) : density(4.3) {
        this->radius = radius;
    }

    double get_volume(void) {
        return 4 * PI * pow(radius, 3) / 3;
    }

    double get_mass() {
        return density * get_volume();
    }
};


int main(int argc, char *argp[]) {
    (void) argc;
    (void) argp;

    Sphere s(3);

    cout << "Mass of Sphere is " << s.get_mass() << endl;

    return 0;
}