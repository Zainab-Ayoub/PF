#include<iostream>
using namespace std;

struct Time {
    int hour;
    int min;
    int sec;
};

void subTime(Time t1, Time t2, Time* sub) {
    if (t2.sec > t1.sec) {
        t1.min--;
        t1.sec += 60;
    }
    sub->sec = t1.sec - t2.sec;

    if (t2.min > t1.min) {
        t1.hour--;
        t1.min += 60;
    }
    sub->min = t1.min - t2.min;

    sub->hour = t1.hour - t2.hour;
}

int main() {
    Time t1, t2, sub;

    cout << "Enter starting time: " << endl;
    cout << "Enter hours: ";
    cin >> t1.hour;
    cout << "Enter minutes: ";
    cin >> t1.min;
    cout << "Enter seconds: ";
    cin >> t1.sec;

    cout << "Enter ending time: " << endl;
    cout << "Enter hours: ";
    cin >> t2.hour;
    cout << "Enter minutes: ";
    cin >> t2.min;
    cout << "Enter seconds: ";
    cin >> t2.sec;

    subTime(t1, t2, &sub);

    cout << "The time difference is: " << sub.hour << " hours " << sub.min << " minutes " << sub.sec << " seconds." << endl;

    return 0;
}
