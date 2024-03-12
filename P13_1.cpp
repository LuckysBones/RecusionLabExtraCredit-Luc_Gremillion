//Luc Gremillion
//Extra Credit
//Computer Science 1
//4-28-2021
// P13_1.cpp -  This program demonstrates the recursive process
// It takes a string and displays 1/2 of it on a line until there is only
// one character left

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

void display_half(string s);

int main( ){ 
	string my_string; 
	cout << "Enter a string \n"; 
	cin >> my_string; display_half(my_string);  
	// Call to get a task done 
	return 0;
} 

void display_half(string s){  
	int length; string temp; 

	length = strlen(s.c_str( ))/2; 
	temp = s.substr(0, length); 

	if(length != 1) {  
		display_half(temp);
		// call to get a subtask done 
	} 
		cout << temp << endl; 
}