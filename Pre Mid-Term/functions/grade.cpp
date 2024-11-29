#include<iostream>
using namespace std;

int prime(int m){
   if(m>=91 && m<=100)
    cout<<"A+";
   else if(m>=81 && m<=90)
    cout<<"A";
   else if(m>=71 && m<=80)
    cout<<"B+";
   else if(m>=61 && m<=70)
    cout<<"B";
   else if(m>=51 && m<=60)
    cout<<"C";
   else if(m>=41 && m<=50)
    cout<<"D";    
   else 
    cout<<"FAIL";
}

int main()
{
   int m;
   cout<<"Enter your marks :";
   cin>>m;
   cout<<"Your grade is ";
   prime(m);
   return 0;
}
