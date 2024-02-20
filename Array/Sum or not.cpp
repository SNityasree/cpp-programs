// /*Write a C program to find whether two arrays are same or not. Two arrays are said to be same if the sum of both the arrays are same and size of arrays are same:

// INPUT FORMAT:

// Input consists of 2 integers and 2 arrays.

// Integers correspond to the size of arrays.

// If two arrays are same, display "Same" else display "Not Same"


// Sample Input:
// 3
// 3
// 1
// 2
// 3
// 1
// 2
// 3

// Sample Output:
// Same 

#include<iostream>
using namespace std;
int main()
{
       int n1,n2,sum1=0,sum2=0;
       cin>>n1;
       int a[n1];
       for(int i=0;i<n1;i++){
           cin>>a[i];
           sum1+=a[i];
       }
       cin>>n2;
       int b[n2];
       for(int i=0;i<n2;i++){
           cin>>b[i];
           sum2+=b[i];
       }
       if(sum1==sum2){
           cout<<"Same";
       }else{
           cout<<"Not Same";
       }
       
         return 0;
}
