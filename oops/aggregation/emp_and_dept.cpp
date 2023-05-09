#include <iostream>
#include <vector>
using namespace std;

class Employee {
private:
  string name;
  string position;
  double salary;

public:
  string getName();
  string getPosition();
  double getSalary();
};

class Department {
private:
  string name;

  // Employee exists before the department and hence pointer
  vector<Employee *> employees;

public:
  string getName();
  void addEmployee(Employee *employee);
};
