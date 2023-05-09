#include <iostream>

class Handler {
protected:
  Handler *successor;

public:
  virtual void setSuccessor(Handler *successor) { this->successor = successor; }
  virtual void handleRequest(int request) = 0;
};

class ConcreteHandler1 : public Handler {
public:
  void handleRequest(int request) override {
    if (request < 10) {
      std::cout << "Request " << request << " handled by ConcreteHandler1."
                << std::endl;
    } else if (successor != nullptr) {
      successor->handleRequest(request);
    }
  }
};

class ConcreteHandler2 : public Handler {
public:
  void handleRequest(int request) override {
    if (request < 20) {
      std::cout << "Request " << request << " handled by ConcreteHandler2."
                << std::endl;
    } else if (successor != nullptr) {
      successor->handleRequest(request);
    }
  }
};

class ConcreteHandler3 : public Handler {
public:
  void handleRequest(int request) override {
    if (request < 30) {
      std::cout << "Request " << request << " handled by ConcreteHandler3."
                << std::endl;
    } else {
      std::cout << "Request " << request << " cannot be handled." << std::endl;
    }
  }
};

int main() {
  ConcreteHandler1 handler1;
  ConcreteHandler2 handler2;
  ConcreteHandler3 handler3;
  handler1.setSuccessor(&handler2);
  handler2.setSuccessor(&handler3);

  handler1.handleRequest(5);
  handler1.handleRequest(15);
  handler1.handleRequest(25);

  return 0;
}
