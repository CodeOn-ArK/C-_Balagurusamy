#include <iostream>

using namespace std;

/********************-CLASS-**********************/

class item {
 private:
  int code;
  float price;

 protected:
 public:
  void getdata(int a, float b) {
    code = a;
    price = b;
  }
  void show(void) {
    cout << "\nCode : " << code << endl;
    cout << "Price : " << price << endl;
  }
};

/******************-FUNCTIONS-*********************/
/*********************-END-************************/

const int size = 2;

int main() {
  item *p = new item[size];
  item *d = p;
  int x, i;
  float y;

  for (int i = 0; i < size; i++) {
    cout << "Input code and price for item \t" << i + 1 << endl;
    cin >> x >> y;

    p->getdata(x, y);
    p++;
  }
  p = d;

  for (int i = 0; i < size; i++) {
    cout << "\nItems\t" << i + 1;
    p->show();
    p++;
  }

  return 0;
}
