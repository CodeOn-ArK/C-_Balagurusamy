#include <iostream>

using namespace std;

void swap_ref(int &x, int &y);
void swap_ptr(int *x, int *y);
void swap_value(int x, int y);
int main() {
  int x, y;

  cout << "Enter x && y\n";
  cin >> x >> y;

  cout << "\nX\t" << x << "\t"
       << "\nY\t" << y << endl;
  swap_value(x, y);
  swap_ptr(&x, &y);
  swap_ref(x, y);

  return 0;
}

void swap_value(int x, int y) {
  int temp;

  temp = x;
  x = y;
  y = temp;

  cout << "\nx && y\n" << x << "\t" << y;
}

void swap_ref(int &x, int &y) {
  int temp;

  temp = x;
  x = y;
  y = temp;

  cout << "\nx && y\n" << x << "\t" << y;
}

void swap_ptr(int *x, int *y) {
  int temp;

  temp = *x;
  *x = *y;
  *y = temp;

  cout << "\nx && y\n" << *x << "\t" << *y;
}
