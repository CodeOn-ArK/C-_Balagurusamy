#include <iomanip>
#include <iostream>

using namespace std;

ostream& currency(ostream& output) {
  output << "Rs";
  return output;
}

ostream& form(ostream& output) {
  output.setf(ios::showpos);
  output.setf(ios::showpoint);

  output.fill('*');
  output.precision(2);
  output.setf(ios::internal, ios::adjustfield);

  output << setiosflags(ios::fixed) << setw(10);

  return output;
}

int main() {
  cout << currency << form << 7864.95;

  return 0;
}
