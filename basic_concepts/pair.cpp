#include <iostream>
#include <utility>

int main(int argc, char *argvp[]) {
  std::pair<std::string, int> employee("Vijay", 1);

  std::cout << "Name of the employee: " << employee.first << std::endl;
  std::cout << "Id of the employee: " << employee.second << std::endl;


  pair<const char*, double> charDoub("str", 3.14);
  pair<const char*, double> charDoub2 = make_pair("str", 3.14);
  auto charDoub3 = make_pair("str", 3.14);

  cout << charDoub.first << ", " << charDoub.second << "\n";    // str, 3.14
  charDoub.first = "Str";
  get<1>(charDoub) = 4.14;
  cout << charDoub.first << ", " << charDoub.second << "\n";    // Str, 4.14

  return 0;
}
