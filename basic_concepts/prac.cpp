#include <iostream>

using namespace std;

// int main(int argc, char *arg[]) { return 0; }

#if 0
bool foo(int &a, int &b) { return a == b; }

int main() {
  int a = 10;
  int c = 10;
  if (foo(a, c)) {
    cout << "Bot the values are same as the values" << endl;
  }
}

#endif

#include <iostream>

using namespace std;

#if 0
int main(int argc, char *argv[]) {
  float x = 15.0;

  cout << "x % 2 :" << x % float(5.0) << endl;

  return 0;
}
#endif

#if 0

// Ranges
int main(int argc, char *argv[]) {
  int percentage = 85;

  cout << "Grade : ";

  switch (percentage) {
  case 90 ... 100:
    cout << "A";
    break;
  case 70 ... 89:
    cout << "B";
    break;
  case 50 ... 69:
    cout << "C";
    break;
  default:
    cout << "D";
  }
}

#endif

#if 0
int main(int argc, char *argv[]) {
  for (int i = 0;; i++) {
    if (100 == i) {
      cout << i << endl;
      break;
    }
  }

  return 0;
}
#endif

#if 0
int main(int argc, char *argv[]) {
  int num = 5;

  cout << "Address of num: " << &num << std::endl;

  return 0;
}
#endif

#if 0
void change_var(int &i) { i = 7; }

int main(int argc, char *argv[]) {

  int i = 4;

  change_var(i);

  cout << "i : " << i << std::endl;

  int &k = i;

  k = 10;

  cout << "i : " << i << std::endl;

  return 0;
}
#endif

#if 0
int main(int argc, char *argv[]) {

  int *arr = new int[stoi(argv[1])];

  for (int i = 0; i < stoi(argv[1]); i++)
    arr[i] = i * 5;

  for (int i = 0; i < stoi(argv[1]); i++)
    cout << arr[i] << '\t';

  cout << std::endl;

  delete[] arr;

  return 0;
}
#endif

#if 0
// References and pointers

void check(int *&i) {
  int n = 11;
  *i = 100;

  i = &n;

  *i = 101;
}

int main(int argc, char *argv[]) {
  int i = 5;
  int *ptr = &i;

  check(ptr);

  cout << "i : " << i << '\n';

  return 0;
}
#endif

#if 0
int main(int argc, char *argv[]) {
  class Employee {
  private:
    string name = "Vijay";

  public:
    void print_name() { cout << name << '\n'; }
  };

  Employee emp;
  emp.print_name();

  return 0;
}
#endif

#if 0
// Playing with the references

void foo(int &i) { i = 6; }

void foo(int i) { i = 10; }

int main(int argc, char *argv[]) {

  int i = 5;

  foo(i);

  return 0;
}
#endif

#if 0
// Playing with the void pointer
int main(int argc, char *argv[]) {
  int *int_ptr = new int;
  void *void_ptr = int_ptr;

  delete int_ptr;
  return 0;
}
#endif

#if 0
// Creating references
int main(int argc, char *argv[]) {

  int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  int(&a_ref)[10] = a;

  a_ref[9] = 19;

  int *i = new int;

  *i = 20;

  int *&i_ref = i;

  *i_ref = 21;

  cout << "a_ref : " << a_ref[9] << endl;

  cout << "*i_ref : " << *i_ref << endl;

  return 0;
}
#endif

#if 0
// Variable Redeclaration

int i = 5;

int main(int argc, char *arg[]) {

  extern int i;
  extern int i;

  cout << "i = " << i << endl;

  return 0;
}
#endif

#if 0
// Playing with string

#include <string>

int main(int argc, char *arg[]) {
  string name = "Vijay Manohar";

  name = name + " Dogiparthi";

  cout << "Name: " << name << endl;

  return 0;
}
#endif

#if 0
// Const reference to a variable

int main(int argc, char *arg[]) {
  int i = 5;

  const int &j = i;

  cout << "i : " << i << endl;

  i = 6;

  cout << "j : " << j << endl;

  return 0;
}
#endif

#if 0
// enum variable
int main(int argc, char *arg[]) {

  enum StateMachineStates {
    STATE_ACTIVE,
    STATE_INACTIVE,
    STATE_INVALID,
  };

  StateMachineStates state = STATE_ACTIVE;

  int sate = state;

  // Assigning an unsigned interget to an enum variable is forbidden.
  // state = 1;

  cout << "State machine state : " << state << endl;

  return 0;
}
#endif

#if 0
int main(int argc, char *arg[]) {

  char a = 'A';
  char *ptr = &a;

  cout << ptr << endl;

  return 0;
}
#endif

#if 0
#include <iostream>

using namespace std;

auto add(unsigned int a, unsigned int b) -> unsigned int {
  return a + b;
}

auto main(int argc, char *argv[]) -> int {
  cout << "Hello World!" << endl;
}
#endif

#if 0
#include <iostream>
#include <typeinfo>

using namespace std;

auto main(int argc, char *argv[]) -> int {

  auto x = 1 + 1.23;

  cout << "Type of x: " << typeid(x).name() << endl;
  cout << " x: " << x << endl;

  return 0;
}
#endif
