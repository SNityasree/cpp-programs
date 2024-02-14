#include<iostream>
using namespace std;
int main(){
    int a,b,t,n;
    cin>>a>>b;
    t=(a%b);
    n=(a/b);
    cout<<"The number of students in each team is "<<n<<" and left out is "<<t;
}
