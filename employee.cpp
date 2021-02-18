#include<iostream>
#include<stdio.h>

using namespace std;

typedef struct{
  int employee_no, salary;
  char dept[20], name[20];
}employe;

employe employee[5], *ptr;

void input();
void display(int);
void average();

int temp;

int main()
{
  input();
  display(temp);
}

void input()
{
  ptr = employee;
  
  int i = 0;
  while(i < 3)
  {
    cout << "\nEnter your name\n";
    cin >> ptr->name;

    cout << "\nEnter your employee ID\n";
    cin >> ptr->employee_no;

    cout << "\nEnter your dept\n";
    cin >> ptr->dept;
    
    cout << "\nEnter your salary\n";
    cin >> ptr->salary;

    i++;
    ptr++;
  }

  void (*func_ptr)(void);

  func_ptr = average;
  func_ptr();
}

void average()
{
  int i = 0, sal = 0, average = 0;
  ptr = employee;
  
  while(i < 3)
  {
    average += ptr->salary;
    
    if(sal < ptr->salary) 
    {
      sal = ptr->salary;
      temp = i;
    }
    i++;
    ptr++;
  }
  
  average /= 3;
}

void display(int i)
{
  cout << "\nThe name is\n"  << employee[i].name;
  cout << "\nSalary is \n" << employee[i].salary;
  cout << "\nEmployee number is\n" << employee[i].employee_no;
}
