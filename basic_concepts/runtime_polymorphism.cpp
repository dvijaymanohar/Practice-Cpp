// C++ program for function overriding with data members

#if 0
#include <iostream>

using namespace std;

// base class declaration.
class Animal {
public:
  string color = "Black";
};

// inheriting Animal class.
class Dog : public Animal {
public:
  string color = "Grey";
};

// Driver code
int main(void) {
  Animal d = Dog(); // accessing the field by reference
                    // variable which refers to derived
  cout << d.color;
}
#endif

#if 0
// Virtual functions
#include <iostream>
using namespace std;

class base {
public:
  base(){};

  virtual void display() { cout << "Base class display function" << endl; }
};

class derived : public base {
public:
  derived(){};
  void display() { cout << "Derived class display function" << endl; }
};

auto main(int argc, char **argv) -> int {

  base *b;

  derived d = derived();
  b = &d;

  b->display();

  return 0;
};

#endif

// Calling the overridden version of the parent's class function
#include <iostream>

using namespace std;

class base {

public:
  void display() const { cout << "base class" << endl; }
};

class derived : public base {

public:
  void display() const { cout << "derived class" << endl; }
};

auto main(int argc, char **argv) -> int {
  derived d1;

  d1.display();
  d1.base::display();

  return 0;
}