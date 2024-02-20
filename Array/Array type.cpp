/*Write a C program to find the type of array as whether it is even, odd or mixed. If all the elements of an array are even, then display the array type as even. If all the elements of an array are odd, then display the array type as odd. If an array has both even and odd elements, then display the array type as mixed.
Sample Input:
5
2
4
1
3
5

Sample Output:
Mixed */

#include<iostream>
using namespace std;
int main()
{
     int n,ev=0,od=0 ;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
     }
         for(int i=0;i<n;i++){
         if(arr[i]%2==0){
             ev++;
         }else{
             od++;
         }
     }if(ev==n){
         cout<<"Even";
     }else if(od==n){
         cout<<"Odd";
     }else{
         cout<<"Mixed";
     }
        return 0;
}
