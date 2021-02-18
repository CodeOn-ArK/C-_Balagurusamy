#include <iostream>
#include <string>

using namespace std;

class binary {
  string s;

 public:
  void read();

  void chk_bin(void) {
    for (int i = 0; i < s.length(); i++) {
      if (s.at(i) != '0' && s.at(i) != '1') {
        cout << "\nIncorrect binary number format .... the prog will quit\n";
        exit(EXIT_FAILURE);
      }
    }
  }

  void ones(void) {
    chk_bin();

    for (int i = 0; i < s.length(); i++) {
      if (s.at(i) == '0')
        s.at(i) = '1';
      else
        s.at(i) = '0';
    }
  }

  void displayones(void) {
    cout << "\nThe original is :\n" << s;
    ones();
    cout << "\nThe 1's complement of the above binary number is :\n"
         << s << endl;
  }
};

inline void binary::read() {
  cout << "\nEnter a binary number\n";
  cin >> s;
}

int main() {
  binary b;
  b.read();
  b.displayones();

  return 0;
}
