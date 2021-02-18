#include<iostream>

using namespace std;

int main()
{
  float num1, num2, average, sum;

  cout << "Enter the numbers\n";
  cin >> num1 >> num2;

  sum = num1 + num2;
  average = sum / 2.0;

  cout << "The avrage is \t" << average << endl;

  return 0;
}
