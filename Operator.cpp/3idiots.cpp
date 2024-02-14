#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float x1,y1,x2,y2;
    cin>>x1>>y1>>x2>>y2;
    float sum1 = (x1+x2)/2;
    float sum2 = (y1+y2)/2;
    cout<<fixed<<setprecision(1)<<"Binoy's house is located at ("<<sum1<<","<<sum2<<")";
    return 0;
}
