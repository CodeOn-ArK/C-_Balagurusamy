#include <iostream>

using namespace std;

const size = 3;
/********************-CLASS-**********************/
template <class T>
class RENAME {
  T* v;

 private:
 protected:
 public:
  vector() {
    v = new T[size];
    for (int i = 0; i < size; i++) {
      v[i] = 0;
    }
  }
  vector(T* a) {
    for (int i = 0; i < size; i++) {
      v[i] = a[i]
    }
  }
  T operator*(vector& y) { T }
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/
