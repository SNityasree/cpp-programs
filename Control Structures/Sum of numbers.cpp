#include<iostream>
using namespace std;
int main()
{
     int n,sum=0;
     cin>>n;
     while(n>0){
         sum+=n;
         cin>>n;
     }cout<<sum;
     
        return 0;
}