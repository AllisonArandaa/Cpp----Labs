/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Task A

Input validation
*/


#include <iostream>
using namespace std;

int main() {
	int integer;

	while(true){
   	cout << "Enter an integer: " << endl;
	cin >> integer;  
	
     if(integer>0 && integer<100) break;
     //cout << "Enter an integer: " << endl;
    }
    cout<<"the square of the number is: "<< integer*integer<<endl;
}

