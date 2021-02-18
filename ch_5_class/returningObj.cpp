#include <iostream>

using namespace std;

class matrix {
 private:
  int m[3][3];

 public:
  void read() {
    cout << "\nntr the elements of the 3x3 matrix\n ";
    int i, j;

    for (i = 0; i < 3; i++) {
      for (j = 0; j < 3; j++) {
        cout << "m[" << i << "] = " << endl;
        cin >> m[i][j];
      }
    }
  }

  void display(void) {
    int i, j;

    for (i = 0; i < 3; i++) {
      cout << "\n";
      for (j = 0; j < 3; j++) {
        cout << m[i][j] << "\t";
      }
    }
  }

  friend matrix trans(matrix);
};

matrix trans(matrix m1) {
  matrix m2;
  int i, j;

  for (i = 0; i < 3; i++)
    for (j = 0; j < 3; j++) {
      m2.m[i][j] = m1.m[j][i];
    }

  return m2;
}

int main() {
  matrix mat1, mat2;

  mat1.read();

  cout << "\nThe matrix is:\n";
  mat1.display();

  cout << endl;

  mat2 = trans(mat1);

  mat2.display();

  return 0;
}
