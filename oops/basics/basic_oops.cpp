
#if 0

#include <iostream>

using namespace std;

class base {
public:
    virtual void print()  {
        cout << "Base" << endl;
    }

    void callme() {
        print();
    }
};

class derived : public base {
    public:
    void print() {
        cout << "Derived" << endl;
    }
};

auto main(int argc, char *argv[]) -> int {
    base obj1;
    obj1.print();

    derived obj2;
    obj2.callme();


    return 0;
}
#endif

#if 0
#include <iostream>

using namespace std;

auto main(int argc, char *argv[]) -> int {
  class test {
    int *a;
    size_t size;

  public:
    test(int size) : size(size) {
      a = new int[size];

      if (!a) {
        cout << "Error: Couldn't allocate memory" << endl;
        a = NULL;
        return;
      }
    }

    test() = default;

    ~test() { delete[] a; }

    void print_details() {
      if (a != NULL)
      {
        for (size_t i = 0; i < size; i++) {
          cout << " " << a[i] << endl;
        }
      }
    }
  } obj;

  obj.print_details();

  return 0;
}
#endif

/*
// Private and Protected access specifier demonstration

#include <iostream>

using namespace std;

class base {
private:
  int a;

protected:
  int b;

public:
  base(int a) : a(a) {}
  base() = default;

  friend void display_details();
};

void display_details(const base &b) {
  cout << "a: " << b.a << endl;
  cout << "b: " << b.b << endl;
}

class derived : public base {
public:
};

auto main(int argc, char *argv[]) -> int {
  base b;
  display_details(b);
  return 0;
}
*/

/*
// C++ program to demonstrate
// protected access modifier
#include <bits/stdc++.h>
using namespace std;

// base class
class Parent {
  // protected data members
protected:
  int id_protected;
};

// sub class or derived class from public base class
class Child : public Parent {
public:
  void setId(int id) {

    // Child class is able to access the inherited
    // protected data members of base class

    id_protected = id;
  }

  void displayId() { cout << "id_protected is: " << id_protected << endl; }
};

// main function
int main() {

  Child obj1;

  // member function of the derived class can
  // access the protected data members of the base class

  // obj1.setId(81);
  obj1.id_protected = 20;
  obj1.displayId();
  return 0;
}
*/

/*
// Understanding friend class

#include <iostream>

using namespace std;

class test {
  int a;
  friend class test_friend;

public:
  test(int num) : a(num) {}
  test() { a = 10; };
};

class test_friend {
public:
  void display(test &obj) const { cout << "a: " << obj.a << endl; }
};

auto main(int argc, char **argv) -> int {
  test test_obj(20);
  test_friend test_friend_obj;

  test_friend_obj.display(test_obj);

  return 0;
}
*/

/*
// understanding Friend function: Member function of another class as a friend.

#include <iostream>
using namespace std;

class base;

class friend_class {
public:
  void show_values(const base &obj);
  friend_class() = default;
};

class base {
private:
  int a;
  friend void friend_class::show_values(const base &obj);

protected:
  int b;

public:
  base(int a, int b) : a(a), b(b) {}
  base() = default;
};

void friend_class::show_values(const base &obj) {
  cout << "a : " << obj.a << endl;
  cout << "b : " << obj.b << endl;
}

auto main(int argc, char *argv[]) -> int {
  base b(10, 20);
  friend_class obj;
  obj.show_values(b);

  return 0;
}
*/

#if 0
// Singleton pattern
#include <iostream>
#include <string.h>
using namespace std;

class Singleton {
private:
  char *first_name;
  static Singleton *obj;

  Singleton(const size_t size) {
    first_name = new char[size * sizeof(char)];

    if (first_name == nullptr) {
      cout << "Error: allocate memory for Singleton" << endl;
      return;
    }
  }

public:
  static Singleton *singleton_init(const size_t size) {

    if (obj != nullptr) {
      return obj;
    }

    obj = new Singleton(size);

    if (obj == nullptr) {
      cout << "Error: allocate memory for Singleton" << endl;
      return nullptr;
    }

    if (obj->first_name != nullptr) {
      strcpy_s(obj->first_name, size, "singleton");
    }

    return obj;
  }

  void display_singleton_data(void) const;

  static void delete_singleton() {
    delete obj;
    obj = nullptr;
  }
};

void Singleton::display_singleton_data() const {
  cout << "First name: " << first_name << endl;
}

auto main(int argc, char **argv) -> int {
  Singleton *obj = Singleton::singleton_init(20);
  obj->display_singleton_data();

  return 0;
}
#endif

#if 0
// Implicit copy constructor

#include <iostream>

using namespace std;

class sample {
  int id;

public:
  sample(int id) : id(id) {}
  sample() = default;

  sample(sample const &obj) : id(obj.id) {}

  void display_data() const { cout << "id : " << id << endl; }
};

auto main(int argc, char **argv) -> int {
  sample obj1(10);
  obj1.display_data();

  sample obj2(obj1);
  obj2.display_data();

  return 0;
}
#endif

#if 0
  // Move constructor

#include <iostream>
      using namespace std;

class MoveTest {
  int *data;

public:
  MoveTest(int datum) {
    data = new int;

    *data = datum;
  }

  // No default constructor allowed
  MoveTest() = delete;
  MoveTest(MoveTest &obj) = delete;

  MoveTest(MoveTest &&obj) {
    data = new int;

    *data = *obj.data;

    delete obj.data;

    obj.data = NULL;
  }

  int get_data() const { return *data; }

  ~MoveTest() { delete data; }
};

auto main(int argc, char **argv) -> int {
  MoveTest obj1(10);
  cout << "Obj1 data: " << obj1.get_data() << endl;

  MoveTest obj2(std::move(obj1));

  cout << "Obj1 data: " << obj1.get_data() << endl;

  return 0;
}
#endif

#if 0
// Descrutor in private access specidier

#include <iostream>
using namespace std;

class Test {
private:
  int *data;

  ~Test() {
    delete data;
    cout << "Destructor called" << endl;
  }

public:
  void removeInstance() { delete this; }

  Test() = default;

  Test(int datum) {
    data = new int;
    *data = datum;
  }
};

auto main(int argc, char *argv[]) -> int {
  Test *obj = new Test(10);
  obj->removeInstance();

  //Test obj(10);
  //obj.removeInstance();

  return 0;
}

#endif

#if 0
#include <iostream>

class MyClass {
public:
  // Constructor
  MyClass() { std::cout << "Constructor called\n"; }

  // Public member function to destroy the object
  void destroy() {
    delete this; // Allowed because the destructor is accessible within the
                 // class
  }

private:
  // Private destructor
  ~MyClass() { std::cout << "Destructor called\n"; }
};

int main() {
  // Create an object
  MyClass *obj = new MyClass();

  // Destroy the object using a public member function
  obj->destroy();

  return 0;
}

#endif

#include <iostream>

class MyClass {
public:
    // Static member function to access the static object
    static MyClass& getInstance() {
        static MyClass instance; // Static object created here
        return instance;
    }

private:
    // Private destructor
    ~MyClass() {
        std::cout << "Destructor called\n";
    }
};

int main() {
    // Access the static object
    MyClass& obj = MyClass::getInstance();

    // Program terminates here, destructor of obj is called automatically
    return 0;
}
