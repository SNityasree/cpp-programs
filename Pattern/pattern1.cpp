/*Write a Program to generate the following pattern :

Sample Input:
5

Sample Output:

* * * * *
* * * * *
* * * * *
* * * * *
* * * * *

*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++)
        {
            cout<<"*";
        }cout<<"\n";
    }
        return 0;
}
