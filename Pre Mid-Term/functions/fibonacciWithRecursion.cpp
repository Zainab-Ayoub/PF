// #include <iostream>
// using namespace std;

// int fib(int x) {
//     if (x == 0) return 0;
//     if (x == 1) return 1;

//     int a = 0, b = 1, c;
//     for (int i = 2; i <= x; ++i) {
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return c;
// }

// int main() {
//     int n;
//     cout << "Enter the nth term of the Fibonacci series: ";
//     cin >> n;
//     cout << "The "<<n<<"th fibonacci number is: " << fib(n) << "\n";

//     return 0;
// }



#include<iostream>
using namespace std;

int fib(int x)
{
    if(x == 0)
        return 0;
    else if(x==1)
        return 1;
    else
        return fib(x-1)+fib(x-2);
}

int main()
{
    int n;
    cout<<"Enter the nth term of fibonacci series : ";
    cin>>n;
    cout << "The "<<n<<"th fibonacci number is: " << fib(n) << "\n";
    
    return 0;
}


// Let's trace the recursive calls for fib(5):

// fib(5) calls fib(4) and fib(3).
// fib(4) calls fib(3) and fib(2).
// fib(3) calls fib(2) and fib(1).
// fib(2) calls fib(1) and fib(0).
// fib(1) returns 1.
// fib(0) returns 0.
// fib(2) returns 1.
// fib(3) calls fib(2) and fib(1).
// fib(2) calls fib(1) and fib(0).
// fib(1) returns 1.
// fib(0) returns 0.
// fib(2) returns 1.
// fib(1) returns 1.
// fib(3) returns 2.
// fib(4) returns 3.
// fib(5) calls fib(4) and fib(3).
// fib(4) returns 3.
// fib(3) returns 2.
// fib(5) returns 5.
// The final result is 5, which is the 5th Fibonacci number.



// #include<iostream>
// using namespace std;

// int fib(int x)
// {
//     if(x == 0)
//         return 0;
//     else if(x==1)
//         return 1;
//     else
//         return fib(x-1)+fib(x-2);
// }

// void fibonacciSeries(int n) {
//     for (int i = 0; i <= n; ++i) {
//         cout << fib(i) << " ";
//     }
//     cout << endl;
// }

// int main()
// {
//     int n;
//     cout<<"Enter the nth term of fibonacci series : ";
//     cin>>n;
//     fibonacciSeries(n);
    
//     return 0;
// }		