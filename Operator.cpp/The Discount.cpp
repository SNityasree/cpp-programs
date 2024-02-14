#include<iostream>
#include<iomanip>

using namespace std;
int main()
{
    float a,b,z;
    cin>>a>>b>>z;
    float c=(a+b);
    float d=(c*(100-z)/100);
    cout<<fixed<<setprecision(2)<<c<<"\n"<<d<<"\n"<<c-d;
   return 0;
}
