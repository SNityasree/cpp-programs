#include<iostream>
#include<math.h>
using namespace std;
int main()
{
     int n,r,s=0,t;
     cin>>n;
     t=n;
     while(n>0)
     {
         r=n%10;
         s=s+(r*r*r);
         n=n/10;
     }
     if(t==s){
         cout<<"Armstrong Number";
     }
     else
     {
         cout<<"Not an Armstrong Number";
     }
        return 0;
}
