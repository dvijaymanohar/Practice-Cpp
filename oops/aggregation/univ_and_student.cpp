
#include <iostream>
#include <vector>
using namespace std;

class Department;
class Course;

class University {
private:
  string name;
  vector<Department *> departments;

public:
  string getName();
  void addDepartment(Department *department);
};

class Department {
private:
  string name;
  vector<Course *> courses;

public:
  string getName();
  void addCourse(Course *course);
};

class Course {
private:
  string name;
  int credits;

public:
  string getName();
  int getCredits();
};
