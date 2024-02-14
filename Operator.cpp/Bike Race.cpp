#include<iostream>
using namespace std;
int main()
{
    int a,b,c,bike;
    cin>>a>>b>>c>>bike;
    if(a%bike==0)
    {
        cout<<"Bike 1 goes into road A";
    }else if(b%bike==0){
        cout<<"Bike 1 goes into road B";
    }
    else if(c%bike==0){
        cout<<"Bike 1 goes into road C";
    }else{
        cout<<"No path exist";
    }
    return 0;
}
