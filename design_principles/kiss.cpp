class Car {
private:
  int speed;
  bool isRunning;

public:
  Car() {
    speed = 0;
    isRunning = false;
  }

  void start() { isRunning = true; }

  void stop() {
    isRunning = false;
    speed = 0;
  }

  void accelerate(int amount) {
    if (isRunning) {
      speed += amount;
    }
  }

  void brake(int amount) {
    if (isRunning) {
      speed -= amount;
    }
  }

  int getSpeed() const { return speed; }

  bool isCarRunning() const { return isRunning; }
};
