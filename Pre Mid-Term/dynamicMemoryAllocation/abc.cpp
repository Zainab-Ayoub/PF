// #include <iostream>
// int main()
// {
// 	using namespace std;

// 	char name[20];       //declaring string 'name'

// 	cin.getline(name, sizeof(name)); //taking string input
// 	cout << name << endl; //printing string
// 	return 0;
// }

// cin.getline(name, sizeof(name));  cin.getline takes two arguments, the string variable and the size of that variable. 
// We have used sizeof operator to get the size of string variable 'name'.

// #include <iostream>

// using namespace std;

// int main(){
// char name[ ]= "Sam";
// char *p;
// p = name;     /* for string, only this declaration will store its base address */
// while( *p != '\0')
// {
// 	cout << *p;
// 	p++;
// }
// 	return 0;
// }

// #include <iostream>

// using namespace std;

// void display( char ch[] ){
// 	cout << ch;
// }

// int main(){
// 	char arr[30];
// 	cout << "Enter a word" << endl;
// 	cin >> arr;
// 	display(arr);
// 	return 0;
// }

