#include<iostream>
using namespace std;
int main()
{
    int n,f,s;
    cin>>n>>f>>s;
    int a=((n*f)/100);
    int b=((n-a)*s/100);
    cout<<a<<"\n"<<b<<"\n"<<((n-(a+b))/3);
   return 0;
}
