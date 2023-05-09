
#include <iostream>
#include <vector>
using namespace std;

class Room {
private:
  int width;
  int height;

public:
  int getArea();
};

class House {
private:
  vector<Room> rooms;

public:
  void addRoom(const Room &room);
  int getTotalArea();
};
