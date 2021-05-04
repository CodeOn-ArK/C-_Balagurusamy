#include <iostream>

using namespace std;

void divide(int x, int y, int z) {
  cout << "\nInside func\n";
  if ((x - y) != 0) {
    int R = z / (x - y);
    cout << "Reuslt = " << R << endl;
  } else
    throw(x - y);
  cout << "\thello\t";
}

int main() {
  try {
    cout << "Inside try block";
    divide(10, 20, 30);
    divide(10, 10, 20);
  } catch (int i) {
    cout << "\ncaught exception\n";
  }

  return 0;
}
