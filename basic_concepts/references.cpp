/*
// Demonstration of References

#include <iostream>

using namespace std;

auto main(int argc, char** argv) -> int {
  auto x = 129;
  auto &y = x;

  cout << "x: " << x << endl;
  cout << "y: " << y << endl;

  x = 230;

  cout << "x: " << x << endl;
  cout << "y: " << y << endl;

  cout << "Address of x : " << &x << endl;
  cout << "Address of y : " << &y << endl;
}

*/