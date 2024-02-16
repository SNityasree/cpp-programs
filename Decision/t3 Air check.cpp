#include<iostream>
using namespace std;
int main()
{
    int front1,rear1,rearr,frontr;
    cin>>front1>>rear1>>rearr>>frontr;
     if(front1==33)
    {
        cout<<"Front-left : Untouched\n";
    }if(front1>33){
        cout<<"Front-left : Deflate\n";
    }if(front1<33){
        cout<<"Front-left : Inflate\n";
    }if(rear1==32){
        cout<<"Rear-left : Untouched\n";
    }
    if(rear1>32){
        cout<<"Rear-left : Deflate\n";
    }
     if(rear1<32){
        cout<<"Rear-left : Inflate\n";
    }
    if(rearr==32){
        cout<<"Rear-right : Untouched\n";
    }
    if(rearr>32){
        cout<<"Rear-right : Deflate\n";
    }if(rearr<32){
        cout<<"Rear-right : Inflate\n";
    }if(frontr==33){
          cout<<"Front-right : Untouched\n";
    }
    if(frontr>33){
        cout<<"Front-right : Deflate\n";
    }
    if(frontr<33){
        cout<<"Front-right : Inflate\n";
    }
    
     //Type Your Code;
        return 0;
}
