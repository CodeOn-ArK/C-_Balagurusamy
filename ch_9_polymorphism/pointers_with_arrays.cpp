#include <iostream>

using namespace std;

int main() {
  int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int i, num, *ptr;

  ptr = arr;

  cout << "\nEnter the element to be searched\n";
  cin >> num;

  for (int i = 0; i < 10; i++) {
    if (*ptr++ == num) {
      cout << "\nElement found at position \t" << i + 1;
      break;
    }
  }

  return 0;
}
