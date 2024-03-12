//Luc Gremillion
//Extra Credit
//Computer Science 1
//5-2-2021
// e13_1.cpp -  This program demonstrates the recursive process
// It takes a string and displays 1/2 of it on a line until there is only
// one character left

#include<iostream>
#include<string>
#include<cstring>

using namespace std;

void display_half(string s);

int main() {
	string my_string;
	cout << "Enter a string \n";
	cin >> my_string; 
	display_half(my_string);
	// Call to get a task done 
	return 0;
}

void display_half(string s) {
	int length,count=5; string temp;
	length = strlen(s.c_str()) / count;
	temp = s.substr(0, length);

	if (length == 4) {
			display_half(temp);
			// call to get a subtask done 
			count--;
			cout << temp << endl;
	}
		

}




