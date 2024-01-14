

#include <iostream>
#include <utility>

using namespace std;

class TestClass {
  int *data;
  std::size_t size;

public:
  TestClass() : size(0), data(nullptr) {
    cout << "Default constructor" << std::endl;
  }

  TestClass(const int n) {
    data = new int[n];
    size = n;

    if (data == NULL) {
      std::cout << "Memory allocation failed" << std::endl;

      throw std::bad_alloc();
    }

    for (int i = 0; i < n; i++) {
      data[i] = i;
    }
  }

  void print_elements() const {
    if (data == nullptr)
      return;

    for (int i = 0; i < size; i++) {
      std::cout << data[i] << '\t';
    }

    std::cout << std::endl;
  }

  // Copy constructor
  TestClass(const TestClass &other) {
    this->size = other.size;

    if (other.data != nullptr) {
      this->data = new int[this->size];

      for (int i = 0; i < this->size; i++) {
        this->data[i] = other.data[i];
      }
    }
  }

  // Copy assignment operator
  TestClass &operator=(const TestClass &other) = default;

  // Move constructor
  TestClass(TestClass &&other) noexcept : data(other.data), size(other.size) {
    other.data = nullptr;
    other.size = 0;
    std::cout << "Move Constructor" << std::endl;
  }

  // Move assignment operator
  TestClass &operator=(TestClass &&other) noexcept {
    std::cout << "Move Assignment Operator" << std::endl;

    if (this != &other) {
      delete[] data; // Release existing resources

      data = other.data;
      size = other.size;

      other.data = nullptr;
      other.size = 0;
    }
    return *this;
  }

  ~TestClass() {
    delete data;
    std::cout << "Memory deallocated" << std::endl;
  }
};

int main(int argc, char **argv) {
  (void)argc;
  (void)argv;

  TestClass t1(10);
  // TestClass t2 = std::move(t1);

  TestClass t3; // Default constructor of t3 is called
  t3 = std::move(t1);

  // Create a third instance and use the move assignment operator
  // MyClass obj3;
  // obj3 = std::move(obj2);

  cout << "Resource moved" << std::endl;

  t1.print_elements();
  t3.print_elements();

  return 0;
}