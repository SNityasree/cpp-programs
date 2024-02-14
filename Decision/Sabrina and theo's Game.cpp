#include<iostream>
using namespace std;
int main()
{
    int m,y;
    cin>>m>>y;
    
    switch(m){
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:
          cout<<"Number of days is 31";
        break;
        case 2:
         if(y%4==0 && y%100 !=0 || y%400==0){
          cout<<"Number of days is 29";
          }else{
              cout<<"Number of days is 28";
          }
          break;
      case 4:case 6: case 9: case 11:
              cout<<"Number of days is 30";
        
    }
    return 0;
}
