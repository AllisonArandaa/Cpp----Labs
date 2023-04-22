/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab1A

Find the smaller of two integers..
*/

#include <iostream>
using namespace std;

int main() {
	int first_number;
	int second_number;
	
	cout << "Enter a number: " << endl;
	cin >> first_number;
	
	cout << "Enter a second number: " << endl;
	cin >> second_number;
	
	if(first_number > second_number){
	cout << "The smaller of the two is" << second_number << endl;
    }
    else if(second_number > first_number){
	cout << "The smaller of the two is" << first_number << endl;	
	}
}

