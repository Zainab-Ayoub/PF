#include<iostream>
using namespace std;

int prime(int n){
   int i;
   for(i=2;i<=n-1;i++)
   {
    if(n%i==0)
      break;
   }
    if(n==i)
      cout<<n<<" is a prime number."<<endl;
    else 
      cout<<n<<" is not a prime number."<<endl;
}

int main()
{
   int n;
   cout<<"Enter a number :";
   cin>>n;
   prime(n);
   return 0;
}