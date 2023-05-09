#include <iostream>
#include <vector>
using namespace std;
class Employee {
protected:
  string name;
  double salary;

public:
  Employee(const string &name, double salary) : name(name), salary(salary) {}
  virtual double calculateSalary() = 0;
};

class HourlyEmployee : public Employee {
private:
  double hoursWorked;

public:
  HourlyEmployee(const string &name, double salary, double hoursWorked)
      : Employee(name, salary) {
    this->hoursWorked = hoursWorked;
  }

  virtual double calculateSalary() override {}
};

class SalariedEmployee : public Employee {
public:
  SalariedEmployee(const string &name, double salary)
      : Employee(name, salary) {}

  virtual double calculateSalary() override {}
};
