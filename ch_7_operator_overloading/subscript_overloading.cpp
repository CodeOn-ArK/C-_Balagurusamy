#include <iostream>

using namespace std;

/********************-CLASS-**********************/

class arr {
 private:
  int a[5];

 protected:
 public:
  arr(int *s) {
    int i;

    for (i = 0; i < 5; i++) {
      a[i] = s[i];
    }
  }

  int operator[](int k) { return (a[k]); }
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/

int main() {
  int x[5] = {1, 2, 3, 4, 5};
  arr A{x};
  int i;

  for (i = 0; i < 5; i++) {
    cout << A[i] << "\t";
  }

  return 0;
}
