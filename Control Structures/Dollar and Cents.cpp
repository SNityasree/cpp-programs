#include<iostream>
using namespace std;
int main()
{
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int doll= a+c;
        int cen= b+d;
        int dollar= ((cen/100)+doll);
        int cents = (cen%100);
        if(cen>=100){
           cout<<dollar<<"\n";
           cout<<cents;
        }else{
            cout<<dollar<<"\n";
            cout<<cents;
            }
        return 0;
}
