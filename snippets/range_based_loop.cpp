

// int main() {
//   std::vector<int> v{1, 2, 3, 4, 5};
//   for (int element : v) {
//     std::cout << element << " ";
//   }
//   std::cout << std::endl;
//   return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//   std::vector<int> v{1, 2, 3, 4, 5};
//   vector<int> vect{10, 20, 30};

//   for (auto it = v.begin(); it != v.end(); ++it) {
//     std::cout << *it << " ";
//   }
//   std::cout << std::endl;
//   return 0;
// }

#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

int main(int argc, char **argv) {
  vector<int> v{1, 2, 3, 4, 5};

  v.push_back(6);

  for (int element : v) {
    cout << element << "\t";
  }

  cout << endl;

  v.pop_back();

  for (auto it = v.begin(); it != v.end(); ++it) {
    cout << *it << "\t";
  }

  cout << endl;

  try {
    cout << "Element at position 7: " << v.at(190) << endl;
  } catch (const std::out_of_range &e) {
    std::cout << "Error: " << e.what() << std::endl;
  }

  return 0;
}