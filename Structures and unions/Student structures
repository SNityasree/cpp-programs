//Write a C program to generate student mark sheets with subject details and grades using Structure.

#include<iostream>
#include<iomanip>
using namespace std;
struct student{
    int rn,s1,s2,s3,s4,s5;
};
int main(){
    int n;
    cout<<"STUDENT MARKSHEET USING STRUCTURES"<<"\n"<<"Enter the no of students"<<"\n";
    cin>>n;
    struct student s[n];
    for(int i=0;i<n;i++){
        cin>>s[i].rn>>s[i].s1>>s[i].s2>>s[i].s3>>s[i].s4>>s[i].s5;
    }
    cout<<"rn s1 s2 s3 s4 s5 avg grade\n\n";
    for(int i=0;i<n;i++){
        cout<<s[i].rn<<" "<<s[i].s1<<" "<<s[i].s2<<" "<<s[i].s3<<" "<<s[i].s4<<" "<<s[i].s5<<" ";
        float avg=(s[i].s1+s[i].s2+s[i].s3+s[i].s4+s[i].s5)/5;
        cout<<fixed<<setprecision(2)<<avg<<" ";
        if(avg > 70){
            cout<<"1"<<"\n";
        }else if(avg>=50 && avg<= 70){
            cout<<"2"<<"\n";
        }else{
            cout<<"3"<<"\n";
        }
    }
}
