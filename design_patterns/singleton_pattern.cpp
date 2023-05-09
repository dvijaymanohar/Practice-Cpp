
#include <cstddef>
#include <iostream>
using namespace std;

class Singleton {
private:
  static Singleton *instance;
  Singleton() { cout << "Singleton constructor" << endl; }

public:
  static Singleton *getInstance() {
    if (instance == nullptr) {
      instance = new Singleton;
    }

    return instance;
  }

  void singletonFoo() { cout << "SingletonFoo" << endl; }
};

Singleton *Singleton::instance = nullptr;

int main(int argc, char **argv) {
  Singleton *instance = Singleton::getInstance();
  instance->singletonFoo();
  return 0;
}
