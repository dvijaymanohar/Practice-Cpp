#include <iostream>
#include <utility>

int main(int argc, char *argvp[]) {
  std::pair<std::string, int> employee("Vijay", 1);

  std::cout << "Name of the employee: " << employee.first << std::endl;
  std::cout << "Id of the employee: " << employee.second << std::endl;

  std::pair<const char *, double> item = std::make_pair("Cucumber", 15.5);
  std::cout << "Item's name: " << item.first << std::endl;
  std::cout << "Item's price: " << item.second << std::endl;

  auto student1 = std::make_pair("Siddhartha", 2);
  auto student2 = std::make_pair("Aaradhya", 6);

  std::cout << "Name of the student1: " << student1.first << std::endl;
  std::cout << "Group : " << student1.second << std::endl;

  std::cout << "Name of the student 2: " << student2.first << std::endl;
  std::cout << "Group : " << student2.second << std::endl;

  std::cout << "Size of student: " << sizeof(student1) << std::endl;

  return 0;
}
