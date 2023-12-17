
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argvp[]) {
  (void)argc;
  (void)argvp;

  std::vector<int> v = {1, 2, 3, 4, 5, 6, 7};
  int sum = 0;

  std::for_each(v.begin(), v.end(), [&sum](int element) { sum += element; });
  cout << "Sum: " << sum << endl;

  return 0;
}