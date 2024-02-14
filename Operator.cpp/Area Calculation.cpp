#include <iostream>
#include<iomanip>
using namespace std;
int main(){
    float s,l,b,r,sq,rec,area;
    cin>>s>>l>>b>>r;
    sq=(s*s);
    rec=l*b;
    area=(3.14)*(r*r);
    cout<<sq<<"\n"<<rec<<"\n";
    cout<<fixed<<setprecision(2)<<area;
}
