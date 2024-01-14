
#include <iostream>

using namespace std;

class Test {
  int *data;
  size_t size;

public:
  Test(unsigned long n) : size(n) {
    if (n != 0 && n <= 20) {
      data = new int[n];

      if (data == nullptr) {
        throw std::bad_alloc();
      }

      for (size_t i = 0; i < n; i++) {
        data[i] = i;
      }
    } else {
      data = nullptr;
    }
  }

  void reverse(void) {
    for (size_t i = 0; i < size / 2; i++) {
      swap(data[size - 1 - i], data[i]);
    }
  }

  void display(void) {
    for (size_t i = 0; i < size; i++) {
      cout << data[i] << '\t';
    }

    cout << endl;
  }
};

int main(int argc, char *argv[]) {
  (void)argc;
  (void)argv;

  Test obj1(10);
  Test obj2(10);

  obj1.reverse();
  obj1.display();
  obj2.display();

  std::swap(obj1, obj2);

  obj1.display();
  obj2.display();

  return 0;
}