
#include <iostream>

bool get_bit(unsigned int value, unsigned char position) {
  if (value == 0 || (unsigned int)position > 31)
    return -1;

  // return (value & 1 << (unsigned int) position) ? 1 : 0;
  return (position >> value) & 1;
}

int main() {
  unsigned int value = 5;

  printf("get_bit(%u, 0) = %d\n", value,
         get_bit(value, 0)); // Expected output: 1
  printf("get_bit(%u, 1) = %d\n", value,
         get_bit(value, 1)); // Expected output: 0
  printf("get_bit(%u, 2) = %d\n", value,
         get_bit(value, 2)); // Expected output: 1
  printf("get_bit(%u, 3) = %d\n", value,
         get_bit(value, 3)); // Expected output: 0

  return 0;
}