#include <iostream>
#include <sys/_types/_blkcnt_t.h>

using namespace std;

class Animal {
  bool is_wild;

public:
  Animal(bool is_wild) { this->is_wild = is_wild; }

  virtual void sound() { cout << "Default animal sound" << endl; }

  bool is_animal_wild() { return false; }
};

class Lion : public Animal {
public:
  Lion(bool is_wild) : Animal(is_wild) {}

  // Method overloading
  void sound() { cout << "Roar" << endl; }
};

int main(int argc, char *argv[]) {
  Animal *a;
  Lion b(false);
  a = &b;

  a->sound();

  if (a->is_animal_wild())
    cout << "animal cannot be domesticated" << endl;
  else
    cout << "animal can be domesticated" << endl;

  return 0;
}
