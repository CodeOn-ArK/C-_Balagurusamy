#include <cstring>
#include <iostream>

using namespace std;

/********************-CLASS-**********************/

class media {
 private:
 protected:
  char title[50];
  float price;

 public:
  media(char *s, float a) {
    strcpy(title, s);
    price = a;
  }

  virtual void Display() {}  // empty virtual func
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/

/********************-CLASS-**********************/

class book : public media {
 private:
  int page;

 protected:
 public:
  book(char *s, float a, int p) : media(s, a) { page = p; }

  void Display();
};

/******************-FUNCTIONS-*********************/

void book ::Display() {
  cout << "\n Title " << title << "\n Pages " << page << "\n Price " << price;
}
/*********************-END-************************/

/********************-CLASS-**********************/

class tape : public media {
 private:
  float time;

 protected:
 public:
  tape(char *s, float a, float t) : media(s, a) { time = t; }

  void Display();
};

/******************-FUNCTIONS-*********************/

void tape ::Display() {
  cout << "\nTitle " << title;
  cout << "\nPlay Time " << time << " mins ";
  cout << "\n price " << price;
}
/*********************-END-************************/

int main() {
  char *title = new char[30];
  float price, time;
  int pages;

  // Book details
  cout << "\n Enter Book Details\n";
  cout << " Title ";
  cin >> title;
  cout << " Price ";
  cin >> price;
  cout << " Pages ";
  cin >> pages;

  book book1(title, price, pages);

  // Tape details
  cout << "\n Enter tape details";
  cout << " Title ";
  cin >> title;
  cout << " Price ";
  cin >> price;
  cout << " Play Time ";
  cin >> time;

  tape tape1(title, price, time);

  media *list[2];
  list[0] = &book1;
  list[1] = &tape1;

  cout << "\n MEDIA DETAILS ";
  cout << "\n------BOOK-----\n";
  list[0]->Display();  // Display book details;

  cout << "\n-----TAPE-------\n";
  list[1]->Display();

  return 0;
}
