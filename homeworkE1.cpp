


/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: E1.6

Write a program that prints three items, such as the names of your three best friends 
or favorite movies, on three separate lines.

*/



#include <iostream>
#include <string>

using namespace std;

int main(){
	string name1;
	string name2;
	string name3;
	
	cout<< "Enter your friend's name: "<<endl;
	cin>> name1;
	cout<< "Enter your friend's name: "<<endl;
	cin>> name2;
	cout<< "Enter your friend's name  : "<<endl;
	cin>> name3;
	
	cout<< "These are your 3 best friends: " <<endl;
	cout<< name1<<endl;
	cout<< name2<<endl;
    cout<< name3<<endl;
	
	return 0;


}
