#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float p,n,r;
    cin>>p>>n>>r;
    float c=((p*n*r)/100);
    cout<<fixed<<setprecision(2)<<c<<"\n";
    float a=p+c;
    cout<<fixed<<setprecision(2)<<a<<"\n";
    cout<<fixed<<setprecision(2)<<(c*2/100)<<"\n";
    cout<<fixed<<setprecision(2)<<(a-(c*2/100));
    return 0;
}
