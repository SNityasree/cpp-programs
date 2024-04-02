/*
Write a Program to generate the following pattern :

Sample Input:
5

Sample Output:

1 2 3 4 5
2 3 4 5
3 4 5
4 5
5

*/

#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
     for(int i=0;i<n;i++){
         for(int j=i;j<n;j++){
             cout<<j+1<<" ";
         }cout<<"\n";
     }
        return 0;
}
