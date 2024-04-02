/* Write a Program to generate the following pattern :

Sample Input:

3

Sample Output:


    *
   ***
  *****
   ***
    *
*/

#include<iostream>
using namespace std;
int main()
{
     int n;
     cin>>n;
    for(int k=1;k<=n;k++){
        for(int c=1;c<=n-k;c++){
            cout<<" ";
        }for(int c=1;c<=2*k-1;c++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for(int k=1;k<=n-1;k++){
        for(int c=1;c<=k;c++){
            cout<<" ";
        }for(int c=1;c<=2*(n-k)-1;c++){
            cout<<"*";
        }
    cout<<"\n";
}
}
