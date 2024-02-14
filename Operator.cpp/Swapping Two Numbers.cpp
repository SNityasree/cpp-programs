#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b;
    c=a+b;
    b=c-b;
    a=c-a;
    cout<<a<<"\n"<<b;
    return 0;
}
