
#include <iostream>

using namespace std;

class base {
public:
    virtual void print() const {
        cout << "base" << endl;
    }
};

class derived : public base {
public:
    void print() const override final {
        cout << "derived" << endl;
    }
};

int main() {
    derived d;
    d.print();

    base *b = new derived;
    b->print();

    b = new base;
    b->print();

    return 0;
}
