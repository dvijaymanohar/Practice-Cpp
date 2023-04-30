#include <iostream>

using namespace std;

// For loop - Range check

int main(int argc, char *argv[]) {

  int number[] = {40, 5, 23, 334, 434, 556, 634};

  for (auto num : number) {
    cout << num << '\t';
  }

  cout << endl;

  return 0;
}