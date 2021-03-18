#include <iostream>

using namespace std;

/********************-CLASS-**********************/

class Base {
 private:
 protected:
 public:
  virtual void Display() { cout << "\n Display base "; }
  virtual void show() { cout << "\nshow base "; }
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/

/********************-CLASS-**********************/

class der : public Base {
 private:
 protected:
 public:
  void Display() { cout << "\n Disply derived"; }
  void show() { cout << "\n show derived"; }
};
/******************-FUNCTIONS-*********************/

/*********************-END-************************/

int main() {
  Base B;
  der D;
  Base *bptr;

  cout << "\n bptr points to Base\n";
  bptr = &B;
  bptr->Display();
  bptr->show();

  cout << "\n\n bptr points to derived\n";
  bptr = &D;
  bptr->Display();
  bptr->show();

  return 0;
}
