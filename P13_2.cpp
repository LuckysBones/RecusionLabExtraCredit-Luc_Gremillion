//Luc Gremillion
//Extra Credit
//Computer Science 1
//4-28-2021
// P13_2.cpp -  This program demonstrates the iterative process
// It takes a string and displays half of it on a line until there is only
// one character left

#include<iostream>
#include<string>
#include<cstring>
#include<cmath>

using namespace std;

int main( ){  

	string my_string; 
	int length, count = 1, j;

	string temp; cout << "Enter a string \n";  
	cin >> my_string; length = strlen(my_string.c_str( ))/2; 

	temp = my_string.substr(0, length); 

	while( length != 1) {  
		length /= 2; count++; 
	}  
	while( count > 0) { 
		j = strlen(my_string.c_str( ))/pow(2,count); 
		temp = my_string.substr(0, j); 
		cout << temp << endl; count--; 
	}  
	return 0;
}