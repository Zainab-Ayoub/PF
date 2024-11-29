#include<iostream>
using namespace std;

int power(int a, int b)
{
    if(b==1)
    {
        return a;
    }
    else
    {
        return(a*power(a,b-1));
    }
    // else {
    //     return 1 / power(a, -b);
    // }
}


int main()
{
    int b,p;
    cout<<"Enter base: ";
    cin>>b;
    cout<<"Enter power: ";
    cin>>p;
    cout << power(b,p) << "\n";
    return 0;
}




// Explanation of Recursion Flow
// Example: power(2, 3)
// Initial call: power(2, 3)
// Not base case, call 2 * power(2, 2)
// First recursive call: power(2, 2)
// Not base case, call 2 * power(2, 1)
// Second recursive call: power(2, 1)
// Not base case, call 2 * power(2, 0)
// Third recursive call: power(2, 0)
// Base case, return 1
// Returning values:

// power(2, 0) returns 1
// power(2, 1) returns 2 * 1 = 2
// power(2, 2) returns 2 * 2 = 4
// power(2, 3) returns 2 * 4 = 8
// The final result is 8