#include <cstring>
#include <iostream>

using namespace std;

class sample {
  int m;
  int read(void);

 public:
  void update();
  void write();
};

inline void sample::update(void) { cout << "\nThe paycheck is\n" << read(); }

inline void sample::write(void) {
  cout << "\nEnter the value for money\n";
  cin >> m;
}

inline int sample::read(void) { return m; }

int main() {
  sample s;

  s.write();

  cout << "\nDo you wann see paycheck?\n";

  while (getchar() != '\n') {
  }

  if (getchar() == 'y') {
    printf("hello");
    s.update();
  }

  return 0;
}
