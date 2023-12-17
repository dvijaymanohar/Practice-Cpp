
#include <iostream>

using namespace std;

class A {
public:
  unsigned id;
};

class B : virtual public A {
public:
  unsigned b;
};

class C : virtual public A {
public:
  unsigned c;
};

class D : public B, public C {
public:
  unsigned d;
};

int main() {
  D d;
  cout << d.id << endl;
  return 0;
}