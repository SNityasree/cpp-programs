Write a C program to find the power of a number using recursion. 

#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
  int n,a;
  cin>>n>>a;
  cout<<fixed<<setprecision(0)<<pow(n,a);
    return 0;
}
