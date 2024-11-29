#include<iostream>
using namespace std;

struct Time{
    int hour;
    int min;
    int sec;
};

Time diffTimes(Time t1, Time t2){
    Time result;

    result.sec = t1.sec - t2.sec;
    if(result.sec<0){
        result.sec += 60;
        t1.min--;
    }
    
    result.min = t1.min - t2.min;
    if(result.min<0){
        result.min += 60;
        t1.hour--;
    }

    result.hour = t1.hour - t2.hour;

    return result;
}

int main(){
    Time t1, t2, diff;

    cout<<"Enter starting time: ";
    cout<<"Enter hours: ";
    cin>>t1.hour;
    cout<<"Enter minutes: ";
    cin>>t1.min;
    cout<<"Enter seconds: ";
    cin>>t1.sec;

    cout<<"Enter ending time: ";
    cout<<"Enter hours: ";
    cin>>t2.hour;
    cout<<"Enter minutes: ";
    cin>>t2.min;
    cout<<"Enter seconds: ";
    cin>>t2.sec;

    diff = diffTimes(t1,t2);
    
    cout<<"The time difference is: "<<diff.hour<<"hours "<<diff.min<<"minutes "<<diff.sec<<"seconds.";
}