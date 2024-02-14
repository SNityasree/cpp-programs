#include<iostream>
#include<iomanip>
using namespace std;
int main(){
  float i,r,t,p;
  cin>>i>>r>>t;
  p=((i*r*t)/100);
  cout<<fixed<<setprecision(2)<<p;
}
