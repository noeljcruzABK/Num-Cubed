// Write a program that uses a function to return the value of a number cubed. 
// Take the number as an input from the user and print the cubed value back to the user.

#include <iostream>
using namespace std;

int cubeNum(int num) {
	return num * num * num;
}

int main()
{
	int num;

	cout << "Please enter a whole number value:\n";
	cin >> num;
	cout << "Your number cubed is: " << cubeNum(num) << ".\n";
}
