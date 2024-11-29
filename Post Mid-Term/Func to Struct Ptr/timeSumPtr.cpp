//Program to check Time Difference in CPP

#include<iostream>
using namespace std;

struct Time{
    int hour;
    int min;
    int sec;
};

Time subTimes(Time t1, Time t2, Time* sum){
   
    if (t2.sec>t1.sec)
    {
        t1.min++;
        t1.sec -= 60;
    }
    sum->sec = t1.sec + t2.sec;

    if (t2.min>t1.min)
    {
        t1.hour++;
        t2.min -= 60;
    }
    sum->min = t1.min + t2.min;

    sum->hour = t1.hour + t2.hour;

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

    subTimes(t1,t2, &sum);
    
    cout<<"Sum of times: "<<sum.hour<<" hrs "<<sum.min<<" mins "<<sum.sec<<" sec. ";
}