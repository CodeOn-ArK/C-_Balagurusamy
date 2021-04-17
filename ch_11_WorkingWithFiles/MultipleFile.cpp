#include <fstream>
#include <iostream>

using namespace std;

int main() {
  system("clear");

  ofstream fout;
  fout.open("../ch_11_WorkingWithFiles/files/country", ios::out);

  if (!fout) cout << "\nErr in opening country\n";

  fout << "Rajasthan\n "
       << "New Delhi\n "
       << "Gujarat\n " << endl;

  fout.close();

  fout.open("../ch_11_WorkingWithFiles/files/capital");
  if (!fout) cout << "\nErr in opening capital\n";

  fout << "India\n "
       << "China\n "
       << "Pakistan\n " << endl;

  const int N = 80;
  char line[N];

  ifstream fin;
  fin.open("../ch_11_WorkingWithFiles/files/country");
  if (!fin) cout << "\nErr in opening country\n";

  cout << "\nContents of country file\n";

  while (fin) {
    fin.getline(line, N);
    cout << line;
  }

  fin.close();
  fin.open("../ch_11_WorkingWithFiles/files/capital");
  if (!fin) cout << "\nErr in opening capital\n";

  cout << "\nContents of capital file\n";

  while (fin) {
    fin.getline(line, N);
    cout << line;
  }

  fin.close();

  return 0;
}
