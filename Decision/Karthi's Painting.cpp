#include<iostream>
using namespace std;
int main()
{
    int wl,wb,l1,b1,l2,b2,n,s,wall;
    cin>>wl>>wb>>l1>>b1>>l2>>b2;
     wall=(wl*wb);
     n=(l1*b1);
     s=(l2*b2);
    if(wall>(n+s)){
        cout<<"Karthi can fix both painting";
    }else
    {
        cout<<"Karthi cannot fix both painting";
    }
    
    return 0;
}
