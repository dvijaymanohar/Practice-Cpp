#include <iostream>

class Singleton {
public:
  static Singleton &getInstance(const int data) {
    static Singleton instance(data);
    return instance;
  }

  int getData() const { return *data; }

  void setData(const int val) { *data = val; }

private:
  int *data;

  Singleton(const int data) : data(new int(data)) {}

  ~Singleton() {
    std::cout << "Singleton descructor called" << std::endl;
    delete data;
    data = NULL;
  }
};

auto main(int argc, char **argv) -> int {
  // Access the Singleton instance
  // Get instance gets the alias of the object.
  Singleton &instance = Singleton::getInstance(20);

  std::cout << "Data present in singleton design pattern: "
            << instance.getData() << std::endl;

  instance.setData(1000);

  std::cout << "Data present in singleton design pattern: "
            << instance.getData() << std::endl;

  return 0;
}
