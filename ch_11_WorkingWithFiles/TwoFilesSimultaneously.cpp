#include <cstdlib>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  const int SIZE = 80;
  char line[SIZE];

  ifstream fin1, fin2;

  fin1.open("../ch_11_WorkingWithFiles/files/country");
  fin2.open("../ch_11_WorkingWithFiles/files/capital");

  for (int i = 0; i < 3; i++) {
    if (!fin1) {
      cout << "\nExit from country\n";
      exit(1);
    }

    fin1.getline(line, SIZE);
    cout << "Capital of " << line;

    if (!fin2) {
      cout << "\nExit from Capital\n";
      exit(1);
    }

    fin2.getline(line, SIZE);
    cout << " " << line << endl;
  }

  return 0;
}
