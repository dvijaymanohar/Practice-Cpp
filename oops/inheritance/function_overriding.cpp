
#include <iostream>

using namespace std;

class Employee {
protected:
  unsigned employee_id;
  string employee_name;
  string reports_to;

public:
  Employee() = default;
  Employee(unsigned employee_id, string employee_name, string reports_to)
      : employee_id(employee_id), employee_name(employee_name),
        reports_to(reports_to){};

  unsigned get_employee_id() const { return employee_id; }

  string get_employee_name() const { return employee_name; }

  string get_reports_to() const { return reports_to; }

  void set_reports_to(string reports_to) { this->reports_to = reports_to; }

  void set_employee_id(unsigned employee_id) {
    this->employee_id = employee_id;
  }

  void set_employee_name(string employee_name) {
    this->employee_name = employee_name;
  }

  void display() const {
    cout << "Employee ID: " << employee_id << endl;
    cout << "Employee Name: " << employee_name << endl;
    cout << "Reports To: " << reports_to << endl;
  };

  void display(string salutation) const {
    cout << salutation << " ";
    display();
  }
};

class Manager : public Employee {
public:
  string department;

public:
  Manager() = default;
  Manager(unsigned employee_id, string employee_name, string reports_to,
          string department)
      : Employee(employee_id, employee_name, reports_to),
        department(department){};

  void display() const {
    Employee::display();
    cout << "Department: " << department << endl;
  }
};

int main() {
    Employee worker(1, "VMD", "VM");
    Manager ceo(1, "VM", "None", "Company");

    ceo.department = "Company";

    ceo.display();

    return 0;
}