#include <iostream>
#include <vector>
using namespace std;

class Product {
private:
  string name;
  double price;
  int quantity;

public:
  double getPrice();
  int getQuantity();
  void setQuantity(int quantity);
};
#include <iostream>
#include <vector>
using namespace std;

class Customer {
private:
  string name;
  string address;
  string phone;

public:
  string getName();
  string getAddress();
  string getPhone();
};

class Order {
private:
  vector<Product> products;
  Customer customer;
  double totalPrice;

public:
  void addProduct(Product product);
  double calculateTotalPrice();
};
