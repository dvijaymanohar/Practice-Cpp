#include <algorithm>
#include <iostream>
#include <vector>

class PrintMe {
public:
  void operator()(const int a) const { std::cout << a << '\t'; }
};

int main(int argc, char *argv[]) {
  std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 9};
  std::for_each(vec.begin(), vec.end(), PrintMe());

  std::cout << std::endl;

  std::for_each(vec.begin(), vec.end(),
                [](int &element) { element = element * 2; });

  for (auto &element : vec)
    std::cout << element << '\t';

  std::cout << std::endl;

  return 0;
}