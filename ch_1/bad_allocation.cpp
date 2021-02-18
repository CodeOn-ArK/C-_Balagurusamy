#include<iostream>

using namespace std;

ostream & sym(ostream & output)
{
  return output << "\tRs\n";
}

class sample
{
private:
  int data1;
  char data2;

public:
  void set(int i, char c)
  {
    data1 = i;
    data2 = c;
  }
  void display(void)
  {
    cout << "\nData1\t" << data1;
    cout << "\nData2\t" << data2 << endl;
  }

};
int main()
{
 sample *s_ptr ;

 try
 {
   s_ptr = new sample;
 }

  catch(bad_alloc ba)
 {
   cout << "Bad allocation occured .. . the prog will be terminated\n";
   return 1;
 }

s_ptr->set(25, 'A');
 s_ptr->display();

 delete s_ptr;

 cout << "\n" << 76 << endl;
 sym(cout);
 return 1;
   
}
