

#include <iostream>

using namespace std;

class MyClass {
public:
  explicit MyClass(int n) : n(n) {
    cout << "MyClass constructor called" << endl;
  }
  void get_details() { cout << "n : " << n << endl; }

private:
  int n;
};

int main(int argc, char *argv[]) {
  MyClass obj1(5);
  obj1.get_details();

  // MyClass obj2 = 10; // Conversion from int to MyClass is ambiguous
  // obj2.get_details();

  MyClass obj3 = static_cast<MyClass>(15);
  obj3.get_details();

  return 0;
}