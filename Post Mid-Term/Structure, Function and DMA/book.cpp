// Create a structure Book with fields title (string) and author (string). 
// Write a function createBook that dynamically allocates memory for a Book structure, initializes its fields using user input, 
// and returns a pointer to the Book. 
// Ensure memory allocated is freed appropriately.

#include<iostream>
using namespace std;

struct Book{
    string title;
    string author;
};

Book* createBook(){
    Book* ptr = new Book;
    
    cout<<"Enter title: ";
    getline(cin,ptr->title);
    cout<<"Enter author name: ";
    getline(cin,ptr->author);
  
    return ptr;
}

int main(){
    Book* bookInfo = createBook();

    cout<<"Title: "<<bookInfo->title<<endl;
    cout<<"Author: "<<bookInfo->author<<endl;

    delete bookInfo; 
}