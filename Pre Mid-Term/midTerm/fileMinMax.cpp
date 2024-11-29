#include<iostream>
#include<fstream>
using namespace std;

int func(int b[]){
    int x[5];
    for (int i=0; i<5; i++)
    {
        x[i]=b[i];
        cout<<x[i]<<" ";
    }
    
}

int main(){
    ofstream myFile;
    myFile.open("numbers.txt");
    myFile<<"5 10 15 20 25 30 35";
    myFile.close();

    ifstream readFile("numbers.txt");
    int a[7], max=0, min=0, b[5];
    for(int i=0; i<7; i++)
      readFile>>a[i];
    
    for(int i=1; i<7; i++){
        if (max<a[i])
        {
            max=a[i];
        }
    }  
    cout<<"The highest number is: "<<max<<endl;
    
    for(int i=1; i<7; i++){
        if (min>a[i])
        {
            min=a[i];
        }
    }  
    cout<<"The lowest number is: "<<min<<endl;
    
    for(int i=0; i<7; i++){
        if (a[i]!=max || a[i]!=min)
        {
            b[i]=a[i];
        }
    }  
    func(b);
}