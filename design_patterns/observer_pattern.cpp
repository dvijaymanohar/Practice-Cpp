#include <iostream>
#include <vector>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

class Observer {
public:
  virtual void update() = 0;
  virtual ~Observer() {}
};

class Subject {
private:
  std::vector<Observer *> observers;

public:
  void attach(Observer *observer) { observers.push_back(observer); }
  void detach(Observer *observer) {
    observers.erase(std::remove(observers.begin(), observers.end(), observer),
                    observers.end());
  }
  void notify() {
    for (auto observer : observers) {
      observer->update();
    }
  }
};

class ConcreteObserver : public Observer {
public:
  void update() override { std::cout << "Observer notified." << std::endl; }
};

int main() {
  Subject subject;
  ConcreteObserver observer1;
  ConcreteObserver observer2;
  subject.attach(&observer1);
  subject.attach(&observer2);
  subject.notify();

  sleep(10);

  subject.detach(&observer1);

  subject.notify();

  sleep(10);

  return 0;
}
