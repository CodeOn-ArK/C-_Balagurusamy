#include <iostream>

using namespace std;

class fixed_deposit {
  long int p_amnt;
  int years;
  float rate;
  float r_value;

 public:
  fixed_deposit(){};
  fixed_deposit(long int p, int y, float = 0.12);
  fixed_deposit(long int p, int y, int r);
  void display();
};

fixed_deposit::fixed_deposit(long int p, int y, float r) {
  p_amnt = p;
  years = y;
  rate = r;

  r_value = p_amnt;

  for (int i = 1; i <= y; i++) {
    r_value *= (1.0 + r);
  }
}

fixed_deposit::fixed_deposit(long int p, int y, int r) {
  p_amnt = p;
  years = y;
  rate = r;

  r_value = p_amnt;

  for (int i = 1; i <= y; i++) {
    r_value *= (1.0 + float(r) / 100);
  }
}

void fixed_deposit::display(void) {
  cout << "\n"
       << "Prinicipal Amount = " << p_amnt << endl
       << "Return Value = " << r_value << endl;
}

int main() {
  fixed_deposit FD1, FD2, FD3;

  long int p;
  int y;
  float r;
  int R;

  cout << "Enter amnt, period, intrest rate\n";
  cin >> p >> y >> R;
  FD1 = fixed_deposit(p, y, R);

  cout << "\nEnter amnt, period, intrest rate in decimal\n";
  cin >> p >> y >> r;
  FD2 = fixed_deposit(p, y, r);

  cout << "\nEnter amnt && period\n";
  cin >> p >> y;
  FD3 = fixed_deposit(p, y);

  cout << "\nDeposit 1";
  FD1.display();

  cout << "\nDeposit 2";
  FD2.display();

  cout << "\nDeposit 3";
  FD3.display();

  return 0;
}
