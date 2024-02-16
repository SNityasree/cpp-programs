#include<iostream>
using namespace std;
int main()
{
    float w,h,bmi,hi,hf;
    cin>>w>>h;
    hi=(h/100);
    hf=hi*hi;
    bmi=w/hf;
    if(bmi<=18.4){
        cout<<"You are underweight. Have an apple daily";
    }else if((bmi>=19)&&(bmi<=24.9)){
        cout<<"You are normal. Go walking daily and maintain it";
    }else{
        cout<<"You are obese.Go to doctor";
    }
    return 0;
}
