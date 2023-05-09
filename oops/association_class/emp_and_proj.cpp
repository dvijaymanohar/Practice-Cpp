#include <iostream>
#include <string>

using namespace std;

class Employee;
class Project;

class EmployeeProject {
private:
  Employee *employee;
  Project *project;

public:
  EmployeeProject(Employee *employee, Project *project);
};

class Employee {
private:
  string name;

public:
  Employee(string name);
};

class Project {
private:
  string name;

public:
  Project(string name);
};
