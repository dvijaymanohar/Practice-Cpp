#include <iostream>

using namespace std;

float division_func(float numerator, float denominator) {
  if (denominator == 0) {
    throw "Division by zero";
  }

  return numerator / denominator;
}

int main(int argc, char *argv[]) {
  int x = 50;

  for (int i = 10; i >= 0; i--) {
    try {
      cout << division_func(50, i) << '\t';
    } catch (const char *error) {
      cout << error << endl;
    }
  }

  return 0;
}