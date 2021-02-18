#include<iostream>

using namespace std;

int main()
{
#if 0
  //question 1
  int x, y, &ptr_x = x, &ptr_y = y;

  cout << "\nEnter the value of x && y\n" ;

  cin >> x >> y;
  cout << "\nvalue of x && y\n" << ptr_x << "\t" << ptr_y << endl;

  int temp;

  temp = x;
  ptr_x = ptr_y;
  ptr_y = temp;

  cout << "\nvalue of x && y\n" << ptr_x << "\t" << ptr_y << endl;
#endif

#if 0
//question 2
  
  int *vec, size, i = 0;

  cout << "\nEnter the size of the vector\n";

  cin >> size;

  try
  {
    vec = new int[size];
  }

  catch(bad_alloc ba)
 {
   cout << "Bad allocation occured .. . the prog will be terminated\n";
   return 1;
 }

  while(i < size)
  {
    cout << "\nvec + " << i << "\t"  << vec[i++];
  }

  delete []vec;

#endif

#if 1
//question 4

  cout << "\nEnter invested value && rate && number of years\n" ;

  int v, 
  v *= recursive(r, n);

#endif
  return 0;
}
