#include <iostream>
using namespace std;

bool exits(int ints[], int count, int k) {
  int left = 0, right = count - 1;

  while (left < right) {
    int middle = left + right / 2;

    if (k == ints[middle]) {
      return true;
    } else if (k < ints[middle]) {
      right = middle - 1;
    } else if (k > ints[middle]) {
      left = middle + 1;
    }
  }

  return false;
}

int main(int argc, char **argv) {

  int ints[] = {-9, 14, 37, 102};

  if (exits(ints, 4, 137)) {
    cout << "Element exists" << endl;
  } else {
    cout << "Element does not exist" << endl;
  }

  return 0;
}