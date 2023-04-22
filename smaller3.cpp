/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab1B

Find the smaller of two integers..
*/

#include <iostream>
using namespace std;

int main() {
	int first_number;
	int second_number;
	int third_number;
	int d;
	
	cout << "Enter a number: " << endl;
	cin >> first_number;
	
	cout << "Enter a second number: " << endl;
	cin >> second_number;
	
	cout << "Enter a third number: " << endl;
	cin >> third_number;
	
	if(first_number > second_number && third_number > second_number){
	    d = second_number;
    }
    else if(second_number > first_number && third_number > first_number){
		d = first_number;
	}
	
	else{
	    d = third_number;
	}
	cout << "the smallest number is: " << d << endl;
}

