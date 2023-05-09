#include <iostream>
#include <string>

using namespace std;

class Student;
class Course;

class Registration {
private:
  Student *student;
  Course *course;

public:
  Registration(Student *student, Course *course)
      : student(student), course(course){};
};

class Student {
private:
  string name;

public:
  Student(string name) : name(name){};
};

class Course {
private:
  string title;

public:
  Course(string title) : title(title){};
};

int main(int argc, char **argv) {
  Course course("Embedded Systems");
  Student student("Vijay Manohar Dogparthi");

  Registration reg(&student, &course);

  return 0;
}
