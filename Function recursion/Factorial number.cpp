//Write a C program to calculate the factorial of a number using recursion.


#include<iostream>
using namespace std;
int factorial(int n);
int main()
{
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
int factorial(int n){
    if(n>1)
    return n*factorial(n-1);
    else if(n<0)
    return 0;
    else
    return 1;
}
