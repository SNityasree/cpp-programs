#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(((a/10)==(a%10))||((a/10)==(a%100))||((a/100)==(a%10)))
    {
        cout<<"Automorphic number";
    }else{
        cout<<"Not Automorphic number";
    }
    return 0;
}
