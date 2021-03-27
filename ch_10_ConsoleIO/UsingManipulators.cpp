#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  system("clear");
  cout.setf(ios::showpoint);

  cout << setw(5) << "n" << setw(15) << "Inverse_of_n" << setw(15)
       << "Sum_of_terms\n\n";

  double term, sum = 0;

  for (int i = 1; i <= 10; i++) {
    term = 1.0 / float(i);
    sum += term;

    cout << setw(5) << i << setw(14) << setprecision(4)
         << setiosflags(ios::scientific) << term << setw(13)
         << resetiosflags(ios::scientific) << sum << endl;
  }

  return 0;
}
