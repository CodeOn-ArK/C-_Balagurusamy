#include <iostream>

using namespace std;

/********************-CLASS-**********************/

class base {
 private:
  int base_x;

 protected:
  int base_x_pro;

 public:
  base() {
    base_x = 10;
    base_x_pro = 100;

    cout << base_x << endl;
    cout << (base_x_pro);
    cout << endl;
  }

  void show() {
    cout << "\nbase_x\t" << base_x;
    cout << "\nbase_x_pro\t" << base_x_pro;

    make_zero(*this);
  }

  friend void make_zero(base &);
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/
void make_zero(base &obj) { obj.base_x = 0; }

/********************-CLASS-**********************/

class derived : public base {
 private:
  int drv_y;

 protected:
 public:
  int drv_y_pro;
  derived() {
    drv_y = 20;
    drv_y_pro = 200;

    cout << drv_y << endl;
    cout << (drv_y_pro);
    cout << endl;
  }

  void change_base() {
    derived::base_x_pro = 1010;
    base::show();
  }
  void show() {
    cout << "\ndrv_y\t" << drv_y;
    cout << "\ndrv_y_pro\t" << drv_y_pro;
  }
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/

int main() {
  derived obj;

  obj.drv_y_pro = 30;

  base bas;
  bas.show();
  bas.show();

  obj.show();
  obj.change_base();

  return 0;
}
