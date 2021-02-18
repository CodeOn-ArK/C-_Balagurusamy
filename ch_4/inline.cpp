#include <iostream>

using namespace std;

inline double cube(double a) { return (a * a * a); }

int main() {
  double y;

  cout << cube(10) << endl << cube(3.5) << endl;

  return 0;
}
