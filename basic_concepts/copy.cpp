#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char **argvp[]) {
  std::vector<int> source = {1, 2, 3, 4, 5, 6};
  std::vector<int> destination(6);

  std::copy(source.begin(), source.end(), destination.begin());

  for (auto element : destination) {
    std::cout << element << std::endl;
  }

  return 0;
}