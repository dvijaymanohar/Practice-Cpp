#include <iostream>
#include <vector>
using namespace std;

class Book {
private:
  string bookName;
  unsigned int bookNumber;
  string author;

public:
  Book(string bookName, unsigned int bookNumber, string author)
      : bookName(bookName), bookNumber(bookNumber), author(author) {}
  string &getBookName() { return bookName; }
  unsigned int getBookNumber() { return bookNumber; }
  string &getAuthor() { return author; }
};

class Borrower {
private:
  string name;
  unsigned int membership_num;

public:
  Borrower(string name, unsigned int membership_num)
      : name(name), membership_num(membership_num) {}
};

class Transaction {
private:
  string transactionId;
  string transactionTime;

public:
  Transaction(string transactionId, string transactionTime)
      : transactionId(transactionId), transactionTime(transactionTime) {}

  string &get_transactionId() { return transactionId; }
  string &get_transactionTime() { return transactionTime; }
};

/**
 * The Library class can associate with the Book, Borrower, and Transaction
 * classes using the addBook(), addBorrower(), and addTransaction() methods
 * respectively.
 */

class LibraryManagement {
private:
  vector<Book> books;
  vector<Borrower> borrower;
  vector<Transaction> transactions;

public:
  LibraryManagement() {}
  void addBook(Book book) { books.push_back(book); }
  void addTransaction(Transaction transaction) {
    transactions.push_back(transaction);
  }
  void addBorrower(Borrower b) { borrower.push_back(b); }
};

int main(int argc, char *argv[]) {
  Book book1("Hond of Baskerville", 1, "Doyle");
  Borrower borrower1("Vijay", 1);
  Transaction transaction1("1A", "9 May 2014");

  LibraryManagement management;
  management.addBook(book1);
  management.addBorrower(borrower1);
  management.addTransaction(transaction1);

  return 0;
}