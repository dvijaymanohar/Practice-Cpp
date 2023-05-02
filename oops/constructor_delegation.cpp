
#include <iostream>

using namespace std;

class Collector {
private:
  int *list;
  unsigned int capacity;
  unsigned int num_items;

public:
  Collector() : list(nullptr), capacity(0), num_items(0) {}

  Collector(int capacity) : list(nullptr), capacity(capacity), num_items(0) {
    if (capacity > 0) {
      list = new int[capacity];
    } else {
      capacity = 0;
    }
  }

  bool append_item(int data) {
    if (num_items < capacity) {
      list[num_items++] = data;
      return true;
    } else {
      return false;
    }
  }

  void display_list(void) {
    cout << "List contents" << std::endl;

    for (int i = 0; i < num_items; i++) {
      cout << list[i] << '\t';
    }
  }

  ~Collector() {
    if (capacity > 0) {
      delete[] list;
    }
  }
};

#if 0
int main(int argc, char *argv[]) {
  Collector obj1;
  obj1.display_list();

  Collector obj2(10);
  obj2.append_item(5);
  obj2.append_item(10);
  obj2.append_item(15);
  obj2.append_item(20);
  obj2.append_item(25);

  obj2.display_list();

  return 0;
}
#endif

int main() {
  Collector *c;
  c = new Collector(10);

  for (int i = 0; i < 15; i++) {
    cout << c->append_item(i) << endl;
  }

  c->display_list();

  delete c;

  cout << endl << "Exiting the program" << endl;
}
