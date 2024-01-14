#include <iostream>
#include <utility>

int main(int argc, char *argvp[]) {
  std::pair<std::string, int> employee("Vijay", 1);

  std::cout << "Name of the employee: " << employee.first << std::endl;
  std::cout << "Id of the employee: " << employee.second << std::endl;

  return 0;
}
