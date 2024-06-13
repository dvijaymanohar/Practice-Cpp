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

/*
#include <functional>
#include <iostream>


auto get_string() -> string {
  return "Hello";
}

template<typename T, typename U>
auto simple_plus(T lhs, U rhs) -> decltype(lhs + rhs)
{
    return lhs + rhs;
}

template<typename T>
auto abs()

auto main(int argc, char *argv[]) -> int {
  std::cout << "Addition of nums : " << std::plus<int>{}(1, 23) << std::endl;
  std::cout << "Addition of nums : " << std::plus<>{}(1, 2.3) << std::endl;

  std::cout << "Get string : " << get_string() << std::endl;
  std::cout << "Plus: " << simple_plus(5, 6.5) << std::endl;
}
*/

/*
#include <iostream>
#include <utility>
#include <vector>


using namespace std;

auto main(int argc, char *argv[]) -> int {
  std::vector<int> vec_orig = {45, 67, 34, 67, 34, 68, 34};
  std::vector<int> vec_moved;

  vec_moved = std::move(vec_orig);

  cout << "Moved object " << std::endl;
  for (auto it = vec_moved.begin(); it != vec_moved.end(); ++it)
    cout << *it << '\t';

  cout << '\n';

  cout << "Original object " << std::endl;
  for (auto it = vec_orig.begin(); it != vec_orig.end(); ++it)
    cout << *it << '\t';

  cout << '\n';
}

*/

/*
#include <iostream>

using namespace std;

auto main() -> int {
  auto String = "Vijaya Manohar";

  cout << "Variable type: " << typeid(String).name() << '\n';
  cout << String << std::endl;
}
*/

/*
#include <iostream>
using namespace std;

auto main() -> int {
  int num = 5;
  float *array = new float[num];

  if (array == nullptr) {
    cout << "Error in allocating memory" << std::endl;
    return -1;
  }

  for (int i = 0; i < num; i++) {
    array[i] = i;
  }

  for (int i = 0; i < num; i++)
    cout << array[i] << "\t";

  cout << endl;

  delete[] array;
  array = nullptr;

  return 0;
}
*/

/*
#include <iostream>

using namespace std;

auto main(int argc, char **argv) -> int {

  string name = "Vijaya Manohar";

  cout << "Enter your name here: ";
  getline(cin, name);

  cout << "Name: " << name << endl;

  return 0;
}
*/

/*
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void print_string(const string &str) { cout << str; }

auto main(int argc, char **argv) -> int {
  string name = "Vijaya Manohar Dogiparthi";
  stringstream stream(name);

  string temp;

  while (stream >> temp) {
    print_string(temp);
    cout << " ";
  }

  cout << endl;
}

*/

#if 0
// string object to c string and vise-versa

#include <iostream>

using namespace std;

auto main(int argc, char **argv) -> int {
  string name = "Vijaya Manohar Dogiparthi";
  unsigned char i = 0;
  char *temp = &name[i];

  while (temp != NULL && i < 3) {
    printf("%s\n", temp);
    i += 1;
    temp = &name[i];

    name += " ";
    name += *temp;
  }

  cout << "Manipulated name: " << name << endl;

  return 0;
}

#endif

#if 0
// String functions

#include <functional>
#include <iostream>
#include <string>
#include <typeinfo>


using namespace std;

// Function to demo erase
auto eraseDemo(string &str)
{
    // Deletes all characters between 0th index and
    // str.end() - 6
    str.erase(str.begin() + 0, str.end() - 6);

    return str;
}

auto main(int argc, char *argv[]) -> int {
  string first_name;

  cout << "Enter your name here: " << endl;
  getline(cin, first_name);

  for (auto iterator = first_name.begin(); iterator != first_name.end(); ++iterator)
    cout << *iterator << " ";

  cout << endl;

  cout << "Left over string: " << eraseDemo(first_name) << endl;

  cout << "Capacity of the string: " << first_name.capacity() << endl;

  first_name.resize(300);

  cout << "Capacity of the string: " << first_name.capacity() << endl;

  first_name += " Manohar Dogiparthi";

  first_name.shrink_to_fit();

  cout << "Capacity of the string: " << first_name.capacity() << endl;


  first_name = "Vijaya Manohar Dogiparthi";

  cout << "Substring: " << first_name.substr(7, 7) << endl;

  return 0;
}
#endif

#if 0
#include <iostream>
#include <memory>
using namespace std;

struct temp {
  int num;

  temp(int num) : num(num) {
    cout << "Temp initalised with: " << num << endl;
  }

  temp() = default;

  void display(void) {
    cout << "Num: " << num << endl;
  }
};

auto main(int argc, char** argv) -> int {

  auto t1 = new temp(25);

  t1->display();

  delete t1;

  auto t2 = new temp[5];

  if (!t2) {
    cout << "Error: allocating memory" << endl;
    exit(EXIT_FAILURE);
  }

  delete [] t2;

  return 0;
}
#endif

#if 0
// Range based loops
#include <iostream>
#include <vector>
using namespace std;

void generate_triangle() {

std::vector<int> data{5};
  for (auto number : data) {
    cout << number << " ";
  }

  std::cout << endl;
}

auto main(int argc, char *argv[]) -> int {
  generate_triangle();

  return 0;
}
#endif

#if 0
#include <iostream>
using namespace std;

class Point {
private:
  int x, y;
  Point(Point &pt) : x(pt.x), y(pt.y) {}

public:
  Point() = default;
  Point(int x, int y) : x(x), y(y) {}

  friend void displayPoint(Point &pt);
};

void displayPoint(Point &pt) {
  cout << "Point coordinates: " << pt.x << " " << pt.y << endl;
}

auto main(int argc, char *argv[]) -> int {
  Point p1(1, 2);
  Point p2(p1);

  displayPoint(p2);

  return 0;
}
#endif

#if 0
// Class destructor and union

#include <iostream>
using namespace std;

class Vector {
private:
  int *x;
  size_t length;

public:
  Vector() = default;
  Vector(const size_t len) : length(len) {
    x = new int[len];

    if (!x) {
      cout << "X could not allocated" << endl;
    }
  }

  ~Vector() {
    delete[] x;
    x = NULL;
    cout << "Explicitly calling the destructor" << endl;
  }
};

union xyz {
  int a;
  Vector vec;
};

auto main(int argc, char *argv[]) -> int {

  Vector vec(20);
  vec.~Vector();

  cout << "programming ending" << endl;

  return 0;
}
#endif

// Deleting the dynamic object using its reference
#include <iostream>
#include <string.h>
using namespace std;

class Dynamic {
  char *name;

  ~Dynamic() {
    cout << "destructor called" << endl;
    delete[] name;
  }

public:
  Dynamic(string &first_name) {
    name = new char[first_name.size() + 1];
    strcpy_s(name, first_name.size(), first_name.c_str());
    puts(name);
    cout << "Name: " << first_name << endl;
  }

  void display_name() const { cout << "Name: " << name << endl; }
};

auto main(int argc, char *arg[]) -> int {
  string name = "Vijaya Manohar Dogiparthi";
  Dynamic *obj = new Dynamic(name);

  obj->display_name();

  return 0;
}