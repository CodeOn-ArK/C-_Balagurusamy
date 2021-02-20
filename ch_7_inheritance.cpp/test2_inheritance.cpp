#include <iostream>

using namespace std;

#include "classes.class"

int main() {
  base obj;

  obj.base_x_public = 10;
  show(&obj);

  return 0;
}
