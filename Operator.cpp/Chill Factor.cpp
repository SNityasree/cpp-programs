#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    cout<<fixed<<setprecision(2)<<(35.74 + 0.6215*(a)+(0.4275*(a)-35.75)*pow(b,0.16));
    return 0;
}
