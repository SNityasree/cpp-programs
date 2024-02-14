#include<iostream>
using namespace std;
int main()
{
    string name,game;
    cout<<"Name:\n";
    getline(cin,name);
    cout<<"Game:\n";
    getline(cin,game);
    cout<<"My name is "<<name<<" and I love to play "<<game<<"\n";
    return 0;
}
