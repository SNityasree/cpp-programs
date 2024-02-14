#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
     float a;
     cin>>a;
     cout<<"\n"<<int(a);
     cout<<fixed<<setprecision(1)<<"\n"<<ceil(a);
     cout<<fixed<<setprecision(1)<<"\n"<<floor(a);
    return 0;
}
