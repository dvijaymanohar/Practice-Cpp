#include <iostream>
#include <vector>
using namespace std;

class Chapter {
private:
  string title;

public:
  string getTitle();
};

class Book {
private:
  vector<Chapter> chapters;

public:
  void addChapter(const Chapter &chapter);
  string getChapterTitle(int index);
};
