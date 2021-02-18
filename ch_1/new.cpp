#include<iostream>

using namespace std;
void foo(int **ptr);

int main()
{
  char *p; p = (char *)new int('A');

  //*p = 10;

  while(*p <= 'Z')
  {
    cout << "*p--> \t" << (*p) << "\t" << (int)(*p)++ << endl;
    
  }

  int **pt;
  foo(pt);

  return 0;
}

void foo(int **ptr)
{
  ptr = new int*[3];
  int i = 0;

  int **head;
  head = ptr;

  while(i < 3)
  {
    *ptr++ = new int[3];
     i++;
  }
 
  /*
   *  ptr --> *ptr
   * *ptr --> **ptr
   */
  ptr = head;
  i = 0;
  while(i < 9)
  {
    **ptr = i;
    cout << (**ptr) << " " << &(**ptr) << endl;
    i++;

    (*ptr)++;
    if( !(i%3) ) 
    {
      cout << endl;
    }
  }
}
