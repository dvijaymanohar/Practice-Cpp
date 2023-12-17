
#include <iostream>

using namespace std;

class MultiplyBy {
private:
  int factor;

public:
  MultiplyBy(int f) : factor(f) {}

  int operator()(int x) { return x * factor; }
};

int main(int argc, const char *argvp[]) {
  (void)argc;
  (void)argvp;

  MultiplyBy m1(2);

  cout << m1(3) << endl;

  return 0;
}