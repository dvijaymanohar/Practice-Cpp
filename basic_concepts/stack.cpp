#include <iostream>
#include <random>

using namespace std;

class Stack {
  int capacity;
  int size;
  int *stack;

public:
  explicit Stack() : capacity(0) {
    stack = nullptr;
    size = 0;

    cout << "Default constructor called " << endl;
  }

  ~Stack() {
    cout << "Releasing the stack" << endl;
    if (capacity > 0)
      delete[] stack;
    stack = nullptr;
  }

  explicit Stack(int capacity) : capacity(capacity) {
    if (capacity > 0 && capacity < 128) {
      stack = new int[capacity];
      size = 0;
    }

    if (!stack || capacity == 0) {
      stack = nullptr;
    }

    cout << "Parametrized constructor called " << endl;
  }

  int push_item(int num) {
    // If the stack is not allocated
    if (!stack)
      return -1;

    // If the stack is fully utilised
    if (size == capacity)
      return -2;

    stack[size++] = num;

    // Pushing the item successful
    return 0;
  }

  int pop_item(int *num) {
    // If the stack is not allocated
    if (!stack)
      return -1;

    // If the stack is empty
    if (size == 0)
      return -2;

    if (nullptr != num) {
      *num = stack[size];
      return 0;
    } else {
      return -3;
    }
  }

  int display_stack() {
    // If the stack is not allocated
    if (!stack)
      return -1;

    // If the stack is empty
    if (size == 0)
      return -2;

    cout << "Stack elements" << endl;

    for (int i = size - 1; i >= 0; i--) {
      cout << stack[i] << '\t';
    }

    cout << endl;

    return 0;
  }

  int display_stack_info(void) {
    cout << endl << "Stack Details" << endl << "Size: " << size << endl;
    cout << "capacity: " << capacity << endl;
    ;
    cout << "Stack location: " << stack << endl;

    return 0;
  }
};

int main(int argc, char *argvp[]) {
  (void)argc;
  (void)argvp;

  // Seed the random number generator
  std::random_device rd;
  std::mt19937 generator(rd());

  // Define a distribution (e.g., uniform distribution between 1 and 100)
  std::uniform_int_distribution<int> distribution(1, 100);

  Stack s1;

  Stack s2(10);

  for (int iter = 0; iter < 10; iter++) {
    // Generate a random number
    s2.push_item(distribution(generator));
  }

  s2.display_stack();
  s2.display_stack_info();

  Stack *s = new Stack[10];

  for (int iter = 0; iter < 10; iter++) {
    s[iter] = Stack(10);
  }

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      s[i].push_item(distribution(generator));
    }
  }

  for (int iter = 0; iter < 10; iter++) {
    // Generate a random number
    s[iter].display_stack();
  }

  cout << "End of program's life" << endl;

  delete[] s;
  return 0;
}