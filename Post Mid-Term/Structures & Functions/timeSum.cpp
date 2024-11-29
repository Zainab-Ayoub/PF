//Program to check Time Difference in CPP

#include<iostream>
using namespace std;

struct Time{
    int hour;
    int min;
    int sec;
};

Time addTimes(Time t1, Time t2){
    Time result;
   
    result.sec = t1.sec + t2.sec;
    if (result.sec>=60)
    {
        result.sec -= 60;
        result.min++;
    }
    
    result.min = t1.min + t2.min;
    if (result.min>=60)
    {
        result.min -= 60;
        result.hour++;
    }

    result.hour = t1.hour + t2.hour;

    return result;
}

int main(){
    Time t1, t2, sum;
    
    cout<<"Enter starting time: "<<endl;
    cout<<"Enter hours: ";
    cin>>t1.hour;
    cout<<"Enter minutes: ";
    cin>>t1.min;
    cout<<"Enter seconds: ";
    cin>>t1.sec;

    cout<<"Enter ending time: "<<endl;
    cout<<"Enter hours: ";
    cin>>t2.hour;
    cout<<"Enter minutes: ";
    cin>>t2.min;
    cout<<"Enter seconds: ";
    cin>>t2.sec;

    sum = addTimes(t1,t2);
    
    cout<<"Sum of times: "<<sum.hour<<" hrs "<<sum.min<<" mins "<<sum.sec<<" sec. ";
}