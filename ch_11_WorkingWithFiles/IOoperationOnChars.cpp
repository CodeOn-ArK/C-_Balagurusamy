#include <cstring>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  char str[80];

  system("clear");
  if (system("mkdir lolo")) cout << "LoLo exists";
  cout << "\nEnter a string\n";
  cin.getline(str, 80, '\n');

  int len = strlen(str);
  //  strcat(str, "\0");

  fstream file;  //("TEXT", ios::in | ios::out);

  // system("cd lolo");
  cout << "\nOpening 'TEXT' File \n\n";

  file.open("../ch_11_WorkingWithFiles/lolo/TEXT", ios::out);
  file.close();
  file.open("../ch_11_WorkingWithFiles/lolo/TEXT",
            ios::out | ios::in | ios::trunc);
  file << flush;

  for (int i = 0; i < len; i++) {
    file.put(str[i]);
  }
  //  file.close();

  // file.open("TEXT", ios::in);

  file.seekg(0);

  char ch;
  cout << "\nReading the file contents: \n";
  while (!file.eof()) {
    file.getline(str, 80, '\n');
    cout << str;
  }
  cout << endl;

  return 0;
}
