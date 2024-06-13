#include <iostream>

class MyClass {
public:
  // Static member function to access the static object
  static MyClass &getInstance() {
    static MyClass instance; // Static object created here
    return instance;
  }

private:
  // Private destructor
  ~MyClass() { std::cout << "Destructor called\n"; }
};

int main() {
  // Access the static object
  MyClass &obj = MyClass::getInstance();

  // Program terminates here, destructor of obj is called automatically
  return 0;
}