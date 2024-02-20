/*Write a C program to find the sum of elements in an array.

Sample Input:

3
1
2
3

Sample Output:
6 */

#include<iostream>
using namespace std;
int main()
{
     int n,s=0;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
        cin>>a[i];
     }for(int i=0;i<n;i++){
         s+=a[i];
     }cout<<s;
        return 0;
}
