//Write a C program to find the maximum element in an array:

//Sample Input:
//5
///1
//2
//33
//4
//5

//Sample Output:
//33

#include<iostream>
using namespace std;
int main()
{
    int n,max=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        for(int i=0;i<n;i++){
           if(max<=arr[i]){
              max=arr[i];
           }
        
        }cout<<max;
        return 0;
}
