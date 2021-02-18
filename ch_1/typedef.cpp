#include<iostream>
#include<stdint.h>

using namespace std;

int main()
{
#if 0
 uint8_t x = 0xff, p = 0x49;

 printf("p= %X\n", p) ;

 x = p & 0xf0;
 p <<= 4;

 x >>= 4;
 x |= p;
 printf("p= %X\n", p) ;

 printf("x= %X\n", x) ;
#endif 

 int x =10, y = 20;

 cout << x << "\t" << y;

 x = ( y = 3) + 10;

 cout << "\t" << x;

 void *ptr;

 ptr = &x;

 cout << *((int * )ptr);

 return 0;
}


