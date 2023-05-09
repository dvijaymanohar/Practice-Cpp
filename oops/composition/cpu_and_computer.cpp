#include <iostream>
#include <vector>
using namespace std;

class CPU {
private:
  int frequency;

public:
  int getFrequency();
};

class Computer {
private:
  CPU cpu;

public:
  int getCPUDetails();
};
