#include <iostream>

using namespace std;

class invent2;

/********************-CLASS-**********************/

class invent1 {
 private:
  int code;
  int items;
  float price;

 protected:
 public:
  invent1(int a, int b, float c) {
    code = a;
    items = b;
    price = c;
  }
  void putdata() {
    cout << "Code : " << this->code << endl;
    cout << "Items : " << this->items << endl;
    cout << "Price : " << this->price << endl;
  }

  int getcodes() { return code; }
  int getItems() { return this->items; }
  float getPrice() { return this->price; }

  operator float() { return (this->items * this->price); }

  /*
  operator invent2()
  {
    invent2 temp;
    temp.code = code;
    temp.value = price * items;

    return temp;
  }
  */
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/

/********************-CLASS-**********************/

class invent2 {
 private:
  int code;
  float value;

 protected:
 public:
  invent2() {
    code = 0;
    value = 0;
  }
  invent2(int x, float y) {
    code = x;
    value = y;
  }
  void putdata() {
    cout << "Code : " << this->code << endl;
    cout << "Value : " << this->value << endl;
  }
  invent2(invent1 p) {
    code = p.getcodes();
    value = p.getItems() * p.getPrice();
  }
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/

int main() {
  invent1 s1(100, 5, 20.0);
  invent2 d1;

  float total_val;

  //---------Invent1 to float-------------//
  total_val = s1;

  //---------Invent1 to Invent2------------//
  d1 = s1;

  cout << "product details\t -- Invent1 type " << endl;
  s1.putdata();

  cout << "\nStock value" << endl;
  cout << "Value = " << total_val << endl << endl;

  cout << "Product details\t -- Invent2 type " << endl;
  d1.putdata();

  return 0;
}
