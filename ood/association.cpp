#include <iostream>
#include <vector>

using namespace std;

class Teacher; // Making this friend of a student class

class Student {
private:
  string Std_name;
  vector<Teacher *> tr;
  void addTeacher(Teacher *teach);

public:
  Student(string name) { Std_name = name; }

  string getName() const { return Std_name; }

  friend ostream &operator<<(ostream &out, const Student &std);

  // Making teacher friend of this class to access addTeacher function
  friend class Teacher;
};

class Teacher {
private:
  string tr_name;
  vector<Student *> stdnt;

public:
  Teacher(string name) { tr_name = name; }

  void addStudent(Student *st) {
    // Teacher will add this student to course
    stdnt.push_back(st);

    // Student will also add this teacher for connection
    st->addTeacher(this);
  }

  friend ostream &operator<<(ostream &out, const Teacher &tchr) {
    int length = tchr.stdnt.size();
    if (length == 0) {
      out << tchr.tr_name << " is not teaching any class";
      return out;
    }

    out << tchr.tr_name << " is teaching: ";
    for (int count = 0; count < length; ++count)
      out << tchr.stdnt[count]->getName() << ' ';

    return out;
  }

  string getName() const { return tr_name; }
};

void Student::addTeacher(Teacher *teach) { tr.push_back(teach); }

ostream &operator<<(ostream &out, const Student &std) {
  int length = std.tr.size();
  if (length == 0) {
    out << std.getName() << " is not registered in any course";
    return out;
  }

  out << std.Std_name << " is taught by: ";
  for (int count = 0; count < length; ++count)
    out << std.tr[count]->getName() << ' ';

  return out;
}

int main() {
  // Creating a Students outside the scope of the Teacher
  Student *s1 = new Student("John");
  Student *s2 = new Student("Stacy");
  Student *s3 = new Student("Sarah");

  Teacher *t1 = new Teacher("Henry");
  Teacher *t2 = new Teacher("Neil");
  Teacher *t3 = new Teacher("Steve");

  t1->addStudent(s1);
  t2->addStudent(s1);
  t1->addStudent(s3);

  cout << *t1 << endl;
  cout << *t2 << endl;
  cout << *t3 << endl;
  cout << *s1 << endl;
  cout << *s2 << endl;
  cout << *s3 << endl;
}