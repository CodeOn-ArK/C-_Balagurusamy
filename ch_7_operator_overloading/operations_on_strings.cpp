#include <cstring>
#include <iostream>

using namespace std;

/********************-CLASS-**********************/

class str {
 private:
  char *p;
  int Len;

 protected:
 public:
  str() {
    p = 0;
    Len = 0;
  }
  str(const char *s) {
    this->Len = strlen(s);
    this->p = new char[Len + 1];

    strcpy(p, s);
  }
  str(const str &s) {
    Len = s.Len;

    p = new char[Len + 1];
    strcpy(p, s.p);
  }
  // ~str() { delete p; }

  friend str &operator+(const str &s, const str &t);

  friend int operator<=(const str &s, const str &t);
  friend void show(const str s);
};

/******************-FUNCTIONS-*********************/

str temp;
str &operator+(const str &s, const str &t) {
  ::temp.Len = s.Len + t.Len;
  ::temp.p = new char[::temp.Len + 1];

  strcpy(::temp.p, s.p);
  strcat(::temp.p, t.p);

  return ::temp;
}

int operator<=(const str &s, const str &t) {
  if (s.Len <= t.Len) return 1;

  return 0;
}

void show(const str s) { cout << s.Len << "\t" << s.p << endl; }

/*********************-END-************************/

int main() {
  str S1 = "hello";
  str S2 = "mellow";
  str S3;

  show(S1);
  show(S2);
  if (S1 <= S2) {
    S3 = S1 + S2;

    show(S3);
  }

  return 0;
}
