#include <cstring>
#include <fstream>
#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  system("clear");

  float height[4] = {12.4, 34, 34.23, 332.23232};
  int i = 0;

  char str[10];
  char dest[50] = "../ch_11_WorkingWithFiles/files/";
  cin.getline(str, '\n', 10);
  strcat(dest, str);

  ofstream outfile;
  outfile.open(dest);

  if (!outfile)
    cout << "\nFile can't be created\n";
  else {
    while (i < 4) {
      outfile << setw(7) << setprecision(6) << height[i++] << '\0';
    }
  }

  outfile.close();

  ifstream infile(dest, ios::in);

  if (!infile)
    cout << "\nCan't open file\n";

  else {
    infile.seekg(8);
    while (!infile.eof()) {
      infile.getline(str, 10, '\0');
      cout << str << '\t' << infile.tellg() << endl;
    }
  }

  infile.close();

  return 0;
}
