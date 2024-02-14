#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,s,n;
    cin>>a>>b;
    s=(((3-a)*(3-a))+((4-b)*(4-b)));
    n=sqrt(s);
    cout<<n;
    return 0;
}
