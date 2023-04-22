/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Quiz 2

Find the smaller of two integers..
*/


#include <iostream>
using namespace std;

int main() {
	int x;
	int y;
	
	cout << "Enter a number: " << endl;
	cin >> x;
	
	cout << "Enter a second number: " << endl;
	cin >> y;
	
	if(x > y){
	cout << "The biggest number is:" << x << endl;
    }
    else if(y > x){
	cout << "The biggest number is: " << y << endl;	
	}
}

