#include<iostream>
using namespace std;
int main()
{
    int n,s=0;
    cin>>n;
    int temp=n;
   while(temp!=0){
       s=s+temp%10;
       temp/=10;
   }
    if(n%s==0){
        cout<<"Harshard number";
    }else{
        cout<<"Not Harshard Number";
    }
    return 0;
}
