#include<iostream>
#include<algorithm>
#include<cctype>
using namespace std;
int main()
{
    int n;
     cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }int m;
    cin>>m;
    for(int i=0;i<n;i++){
       if(a[i]==m){
          remove(a[i]);
        cout<<a[i];
    }
    }
       return 0;
}
