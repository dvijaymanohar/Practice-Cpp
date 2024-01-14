

#include <iostream>
#include <utility>
#include <vector>

int main(int argc, char *argvp[]) {

  std::vector<int> big_vector = {1000000, 4343};
  std::vector<int> vec;

  std::vector<int>::iterator it;

  for (it = big_vector.begin(); it != big_vector.end(); ++it) {
    std::cout << *it << " ";
  }

  std::cout << std::endl;

  vec = std::move(big_vector);

  for (it = vec.begin(); it != vec.end(); ++it) {
    std::cout << *it << " ";
  }

  std::cout << std::endl;

  return 0;
}