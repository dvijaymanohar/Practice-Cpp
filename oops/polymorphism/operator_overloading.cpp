

#include <iostream>
using namespace std;

class Rectangle {
public:
  Rectangle() : length(0), breath(0) {}
  Rectangle(double length, double breath) : length(length), breath(breath) {}

  double compute_area() const { return length * breath; }
  double compute_perimeter() const { return 2 * (length + breath); }
  float get_length() const { return length; }
  float get_breath() const { return breath; }
  void set_length(float length) { this->length = length; }
  void set_breath(float breath) { this->breath = breath; }

private:
  float length;
  float breath;
};

class ComplexNumber {
public:
  ComplexNumber(float real = 0, float imaginary = 0)
      : real(real), imaginary(imaginary) {}
  // ComplexNumber() : real(0.0), imaginary(0.0) {}
  ComplexNumber operator+(const ComplexNumber &other) {
    cout << "+ operator fuction invoked" << endl;
    return ComplexNumber(real + other.real, imaginary + other.imaginary);
  }

  friend ostream &operator<<(ostream &os, const ComplexNumber &other);

private:
  float real;
  float imaginary;
};

ostream &operator<<(ostream &out, const ComplexNumber &c) {
  cout << "<< operator fuction invoked" << endl;
  out << c.real;
  out << "+i" << c.imaginary << endl;

  return out;
}

int main(int argc, char *argv[]) {
  ComplexNumber a(5.0, 5.0);
  ComplexNumber b(8.0, 10.0);
  ComplexNumber c;

  cout << a + b;

  return 0;
}
