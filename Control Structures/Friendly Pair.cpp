#include<iostream>
using namespace std;
int main()
{
     int n,s,sum=0,sum2=0;
     cin>>n>>s;
     for(int i=1;i<n;i++){
         if(n%i==0){
             sum=sum+i;
         }
         }for(int j=1;j<s;j++){
             if(s%j==0){
             sum2=sum2+j;
         }
     
     }
     if(sum==n &&sum2==s){
         cout<<"Friendly Pair";
     }
     else{
         cout<<"Not Friendly Pair";
     }
     
        return 0;
}
