#include <iostream>

using namespace std;

/********************-CLASS-**********************/

class BC {
 private:
 protected:
 public:
  int b;
  void show() { cout << "b = " << b << endl; }
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/

/********************-CLASS-**********************/

class DC : public BC {
 private:
 protected:
 public:
  int d;
  void show() { cout << "b = " << b << endl << "d = " << d << endl; }
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/

int main() {
  BC *bptr;
  BC base;
  bptr = &base;

  bptr->b = 100;
  cout << "bptr points to base obj \n ";
  bptr->show();

  // derived class
  DC der;
  bptr = &der;
  bptr->b = 200;

  // bptr->d = 300;
  cout << "bptr now points to der obj\n";
  bptr->show();

  DC *dptr;
  dptr = &der;
  dptr->d = 300;
  dptr->b = 199;

  cout << "dptr is der type ptr\n";
  dptr->show();

  cout << "using ((DC * )bptr)\n";
  ((DC *)bptr)->d = 40;
  ((DC *)bptr)->b = 40;
  ((DC *)bptr)->show();

  return 0;
}
