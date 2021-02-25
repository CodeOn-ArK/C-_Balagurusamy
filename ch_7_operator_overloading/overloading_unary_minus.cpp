#include <iostream>

using namespace std;

/********************-CLASS-**********************/

class space {
 private:
  int x;
  int y;
  int z;

 protected:
 public:
  void getdata(int a, int b, int c);
  void display(void);
  void operator-();
};

/******************-FUNCTIONS-*********************/
void space::getdata(int a, int b, int c) {
  x = a;
  y = b;
  z = c;
}

void space::display(void) {
  cout << "X = " << x << endl << "Y = " << y << endl << "Z = " << z << endl;
}

void space::operator-() {
  x = -x;
  y = -y;
  z = -z;
}
/*********************-END-************************/

int main() {
  space S;

  S.getdata(1, 2, 3);
  cout << "S : " << endl;
  S.display();

  -S;

  cout << "-S : " << endl;
  S.display();

  return 0;
}
