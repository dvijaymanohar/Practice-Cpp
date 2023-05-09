#include <iostream>
#include <vector>
using namespace std;

class Musician {
private:
  string name;
  string instrument;

public:
  string getName();
  string getInstrument();
};

class MusicBand {
private:
  string name;
  vector<Musician *> musicians;

public:
  string getName();
  void addMusician(Musician *musician);
};
