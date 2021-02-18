#include <iomanip>
#include <iostream>

using namespace std;

class test {
 private:
  int *a, *head;

 public:
  test(int size) {
    a = new int[size];
    cout << "\n\nConstructor Msg: Integer array of size " << size
         << " created... ";

    head = a;

    for (int i = 0; i < 12; i++) {
      *a = i;
      a++;
    }
  }
  void display();

  ~test() {
    a = head;
    delete a;

    cout << "\n\nDestructor Msg: Freed mem allocated for int array\n";
  }
};

void test::display() {
  a = head;

  for (int i = 0; i < 12; i++) {
    cout << "\na + " << i << " = " << setw(7) << *(a++);
  }
}

int main() {
  int a;

  cout << "\nEnter the size of the array\n";
  cin >> a;

  cout << "\nCreateing an obj of test class\n";
  test T(a);

  T.display();

  cout << "\nEntering Destructor\n";

  return 0;
}
