#include<iostream>
using namespace std;
int main()
{
    int x,y,o,t,m;
    cin>>x>>y>>o>>t>>m;
    if((o<t)&&(o<m)&&(t<m)){
        if(x==y){
            cout<<"One way pass + Two way pass";
        }else{
            cout<<"Monthly Pass";
        }
    }
    else{
        cout<<"Invalid Input";
    }
        return 0;
}
