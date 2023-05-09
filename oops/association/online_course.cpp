#include <iostream>
#include <vector>
using namespace std;

class Course {
private:
  string name;
  string description;
  int credits;

public:
  int getCredits();
};

class Student {
private:
  string name;
  string address;
  string phone;
  vector<Course> courses;

public:
  void enrollCourse(Course course);
};

class Instructor {
private:
  string name;
  string address;
  string phone;

public:
  void assignGrade(Student student, Course course, int grade);
};
