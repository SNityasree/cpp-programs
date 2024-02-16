#include<iostream>
using namespace std;
int main()
{
     int n,s=0;
     cin>>n;
     for(int i=1;(i<n);i++){
         if(n%i==0){
         s=s+i;
         }
     }
     if((n>11) && (s>n) ){
         cout<<"Abundant number";
     }else{
         cout<<"Not Abundant number";
     }
     
        return 0;
}
