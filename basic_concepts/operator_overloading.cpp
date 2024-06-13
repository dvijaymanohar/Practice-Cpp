#include <iostream>

class ComplexNumber {
  float real;
  float imaginary;

public:
  ComplexNumber(float real, float imaginary)
      : real(real), imaginary(imaginary) {}
  ComplexNumber operator+(const ComplexNumber &other) {
    return ComplexNumber(real + other.real, imaginary + other.imaginary);
  }
  void display_complex_number() const {
    std::cout << "ComplexNumber : " << real << " + i" << imaginary << std::endl;
  }
};

auto main(int argc, char *argv[]) -> int {
  ComplexNumber cn1(10.0, 20.0);
  ComplexNumber cn2(20.0, 30.0);

  ComplexNumber cn3 = cn1 + cn2;
  cn3.display_complex_number();

  return 0;
}