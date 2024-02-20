//Write a C program to count the number of even and odd elements in an array:

//Sample Input:
//3
//1
//2
//3
//Sample Output:
//Odd: 2
//Even
#include<iostream>
using namespace std;
int main()
{
     int n,od=0,ev=0;
     cin>>n;
     int arr[n];
     for(int i=0;i<n;i++){
         cin>>arr[i];
         if (arr[i]%2==0){
             ev++;
         }else{
             od++;
         }
     } cout<<"Odd: "<<od<<"\n";
     cout<<"Even: "<<ev;
        return 0;
}
