//Write a C program to reverse a string using recursion.

#include<iostream>
using namespace std;
  
void reverse(string str)
{
	int len = str.length();
	int n = len; 
	while(n--)
		cout << str[n];
}

int main(void)
{
	string a;
cin>>a;
	reverse(a);
	
	return (0);
}
