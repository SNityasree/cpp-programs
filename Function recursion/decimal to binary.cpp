//Write a C program to convert a decimal number to a binary number by recursion.

#include<iostream>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    int a[n];
    if(n==0){
        cout<<"0";
    }else{
    for(i=0;n>0;i++){
        a[i]=n%2;
        n=n/2;
    }
    for(i=i-1;i>=0;i--){
        cout<<a[i];
    }
    }
    return 0;
}
