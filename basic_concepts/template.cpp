
#if 0
#include <iostream>

using namespace std;

template <typename T> T my_max(T x, T y) { return x > y ? x : y; }

auto main(int argc, char **argv) -> int {
  if (argc < 3) {
    cout << "Usage: a.exe x y" << endl;
    exit(EXIT_FAILURE);
  }

  int x = atoi(argv[1]);
  int y = atoi(argv[2]);

  cout << "Max of " << x << " and " << y << " is " << my_max<int>(x, y) << endl;

  return 0;
}

#endif

// Bubble sort implementation
#include <iostream>
using namespace std;

template <typename T>
void BubbleSort(const T arr)