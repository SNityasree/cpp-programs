#include<iostream>
using namespace std;
int main()
{
    int d,y,w;
    cin>>d;
    y=d/365;
    w=(d%365)/7;
    d=(d%365)%7;
    cout<<y<<"\n"<<w<<"\n"<<d;
    return 0;
}
