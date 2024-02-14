#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<fixed<<setprecision(1)<<((x1+x2)/2)<<"\n"<<((y1+y2)/2);
    return 0;
}
