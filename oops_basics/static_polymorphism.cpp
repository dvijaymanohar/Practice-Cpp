#include <iostream>

using namespace std;

class SumOfNumber {
public:
  SumOfNumber() {}

  long SumOfNumbers(const int a, const int b) { return a + b; }

  long SumOfNumbers(const double a, const double b, const double c = 0) {
    return a + b + c;
  }
};

int main() {
  SumOfNumber obj;

  cout << "Sum of number 1, 2 is: " << obj.SumOfNumbers(1, 2) << std::endl;
  cout << "Sum of number 1, 2, 3 is: " << obj.SumOfNumbers(1, 2, 3)
       << std::endl;

  return 0;
}