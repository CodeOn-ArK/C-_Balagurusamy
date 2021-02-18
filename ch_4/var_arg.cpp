#include <cstdarg>
#include <iostream>

using namespace std;

int find_max(int count, ...) {
  int max, value;
  va_list list;  // declare variable arg list

  va_start(list, count);    // start accessing variable list
  max = va_arg(list, int);  // extract the first element of the list

  for (int arg = 1; arg < count; ++arg) {
    value = va_arg(list, int);  // extract each successive element from list
    if (max < value) max = value;
  }

  va_end(list);  // end the access of the variable arg list

  return max;
}

int main() {
  cout << find_max(5.4, 1, 0.2, 34, 3, 1241, 4) << endl;

  return 1;
}
