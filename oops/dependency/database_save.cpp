#include <iostream>
#include <string>
using namespace std;

class Database {
public:
  bool saveData(const string &data) const {
    cout << data << endl;
    return true;
  }
};

class Report {
public:
  bool generateReport() { return true; }
  bool saveReport(const Database &db) const {
    string str = "Vijay Manohar";
    return db.saveData(str);
  };
};

int main(int argc, char **argv) {
  Report rep;
  Database db;

  rep.saveReport(db);

  return 0;
}