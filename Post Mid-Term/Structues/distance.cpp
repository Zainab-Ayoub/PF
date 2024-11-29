// program for the addition of two distances using structure in CPP 

#include <iostream>
using namespace std;

struct Distance {
    int feets;
    float inches;
};

int main() {
    Distance d1, d2, add;  

    cout << "Please enter first distance: " << endl;
    cout << "Please enter feets: ";
    cin >> d1.feets;
    cout << "Please enter inches: ";
    cin >> d1.inches;

    cout << endl << "Please enter second distance: " << endl;
    cout << "Please enter feets: ";
    cin >> d2.feets;
    cout << "Please enter inches: ";
    cin >> d2.inches;

    add.feets = d1.feets + d2.feets;
    add.inches = d1.inches + d2.inches;

    if (add.inches > 12) {
        add.feets++;
        add.inches -= 12;
    }

    cout << endl << "The sum of distances " << add.feets << " feet " << add.inches << " inches" << endl;

    return 0;
}
