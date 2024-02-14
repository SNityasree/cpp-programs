#include<iostream>
using namespace std;
int main()
{
    int w,na,nc,adult,childr,total;
    cin>>w>>na>>nc;
    adult=(75*na);
    childr=(50*nc);
    total=(adult+childr);
    if(total<=w){
        cout<<"Boat is Stable";
    }else{
        cout<<"Boat will drown";
    }
    return 0;
}
