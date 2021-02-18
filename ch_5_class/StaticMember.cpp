#include <iostream>

using namespace std;

class test {
  int code;
  static int count;

 public:
  void setCode(void) { code = ++count; }
  void showCode(void) { cout << "object number : " << code << "\n"; }
  static void showcount(void) { cout << "count: " << count << "\n"; }
};

int test::count = 0;

int main() {
  test t1, t2;

  t1.setCode();
  t2.setCode();

  test::showcount();

  test t3;
  t3.setCode();

  test::showcount();

  t1.showCode();
  t2.showCode();
  t3.showCode();

  return 0;
}
