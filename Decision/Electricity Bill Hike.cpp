#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    cin>>a;
    if(a<=200){
        cout<<fixed<<setprecision(0)<<"Rs."<<(ceil(0.5*a));
    }else if(a<=400){
        cout<<fixed<<setprecision(0)<<"Rs."<<(ceil(0.65*a)+100);
    }else if(a<=600){
        cout<<fixed<<setprecision(0)<<"Rs."<<(ceil(0.80*a)+200);
    }
    else if(a>=600){
        cout<<fixed<<setprecision(0)<<"Rs."<<(ceil(1.25*a)+425);
    }
}
