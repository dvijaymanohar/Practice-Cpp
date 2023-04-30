#include <iostream>

using namespace std;

class MyClass {
  int *data;
  unsigned int size;

public:
  // Default constructor
  MyClass() : data(nullptr), size(0) {}

  // Parameterized constructor
  explicit MyClass(unsigned int size) : data(new int[size]), size(size) {}

  // Move constructor
  MyClass(MyClass &&other) {
    data = other.data;
    size = other.size;

    other.data = nullptr;
    other.size = 0;
  }

  void populate_data() {
    for (int i = 0; i < size; i++) {
      data[i] = i;
    }
  }

  void get_data() const {
    if (data != nullptr) {
      cout << "Object's data is " << endl;

      for (int i = 0; i < size; i++) {
        cout << data[i] << "\t";
      }

      cout << std::endl;

      return;
    }

    cout << "There is no data available" << std::endl;
  }

  ~MyClass() { delete[] data; };
};

int main(int argc, char *argv[]) {
  MyClass obj1(5);
  obj1.populate_data();

  MyClass obj2(std::move(obj1));

  MyClass obj3;

  obj1.get_data();
  obj2.get_data();

  return 0;
}
