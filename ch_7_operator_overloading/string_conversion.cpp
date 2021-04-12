#include <iostream>
#include <string>

using namespace std;

/********************-CLASS-**********************/

class conversion {
 private:
  char* str;
  int len;

 protected:
 public:
  conversion() {
    str = new char;
    len = 0;
  }

  conversion(string& s) {
    str = new char[s.size()];
    for (int i = 0; i < s.size(); i++) {
      str[i] = s[i];
    }
    len = s.size();
  }

  void display() { cout << "\n" << str << "\t" << len; }
};

/******************-FUNCTIONS-*********************/

/*********************-END-************************/

int main() {
  string sos;
  sos = "hello";
  conversion c(sos);

  c.display();
  return 0;
}
