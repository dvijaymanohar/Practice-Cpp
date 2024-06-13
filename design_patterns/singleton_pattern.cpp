
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

#if 0
#include <iostream>
#include <string.h>

using namespace std;

class Singleton {
public:
  // Static member function to get the instance
  static Singleton &getInstance(const size_t size) {
    // Check if the instance has already been created
    if (!instance) {
      // If not, create a new instance
      instance = new Singleton(20);

      if (instance->first_name != nullptr) {
        strcpy_s(instance->first_name, size, "singleton");
      }
    }

    return *instance;
  }

  // Delete the copy constructor and assignment operator
  Singleton(Singleton const &) = delete;
  void operator=(Singleton const &) = delete;

  // Example member function
  void doSomething() { std::cout << "Singleton instance is doing something\n"; }

  // Destructor to release the dynamically allocated memory
  ~Singleton() {
    if (instance) {
      delete instance;
      instance = nullptr;
    }
  }

private:
  // Private constructor to prevent instantiation
  Singleton() {}

  Singleton(const size_t size) {
    first_name = new char[size * sizeof(char)];

    if (first_name == nullptr) {
      cout << "Error: allocate memory for Singleton" << endl;
      return;
    }
  }

  char *first_name = NULL;

  // Static pointer to hold the single instance
  static Singleton *instance;
};

// Initialize the static pointer to nullptr
Singleton *Singleton::instance = nullptr;

int main() {
  // Access the Singleton instance
  Singleton &singleton = Singleton::getInstance();

  // Use the Singleton instance
  singleton.doSomething();

  return 0;
}
#endif