#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  class MyClass {
  public:
    MyClass(int num) : num(num) {}

    void display_details(void) const { cout << "num : " << num << endl; }

    void set_num(int n) const { num = n; }

  private:
    mutable int num;
  };

  const MyClass obj(5);

  obj.display_details();

  obj.set_num(6);

  obj.display_details();

  return 0;
}