#include<iostream>
using namespace std;
int main()
{
       int n,s=0;
       cin>>n;
       for(int i=n-1;i>0;i--){
           s=s+i;
       }if(s==n){
           cout<<"Fibonacci number";
       }else{
           cout<<"Not Fibonacci number";
       }
        return 0;
}
