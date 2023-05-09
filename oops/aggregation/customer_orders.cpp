#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Customer;

class Order {
private:
  unsigned int order_num;
  Customer *customer;

public:
  Order() : order_num(0), customer(nullptr) {}
  Order(unsigned int order_num, Customer *customer)
      : order_num(order_num), customer(customer) {}

  Customer *get_customer() const { return customer; }

  unsigned int get_order_num() const { return order_num; }
};

class Customer {
private:
  string name;
  string address;
  vector<Order> orders;

public:
  Customer(string name, string address) {
    this->name = name;
    this->address = address;
  }

public:
  void placeOrder(Order order) { this->orders.push_back(order); }

  // getters and setters
  std::vector<Order> &getOrders() { return orders; }

  void setOrder(Order order) { this->orders.push_back(order); }

  string &getName() { return name; }
};

int main(int argc, char **argv) {
  Customer customer("Vijay", "5035EM");
  Order order(123, &customer);

  cout << "Customer name: " << order.get_customer()->getName() << std::endl;
  customer.setOrder(order);
  vector<Order> cust_orders = customer.getOrders();

  for (Order order : cust_orders) {
    cout << "Order name: " << order.get_order_num();
  }

  cout << endl;

  return 0;
}