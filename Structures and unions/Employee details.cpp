//Write a C program to store the employee details using Union.

#include<iostream>
using namespace std;
struct employee{
    string name;
    int sal;
};
int main()
{
  employee n;
  cin>>n.name;
  cin>>n.sal;
  cout<<"Enter the Employee details";
  cout<<"\nEnter the Employee name\n"<<n.name;
  cout<<"\nEnter the Employee salary\n"<<n.sal;
  cout<<"\nEmployee Details"<<"\n     "<<n.sal;
    return 0;
}
