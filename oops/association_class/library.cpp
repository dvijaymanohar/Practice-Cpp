#include <iostream>
#include <string>

using namespace std;

class LibraryMember;
class Book;

class BookBorrowing {
private:
  LibraryMember *borrower;
  Book *book;
  Date borrowedDate;

public:
  BookBorrowing(LibraryMember *borrower, Book *book, Date borrowedDate);
};

class LibraryMember {
private:
  string name;

public:
  LibraryMember(string name);
};

class Book {
private:
  string title;

public:
  Book(string title);
};
