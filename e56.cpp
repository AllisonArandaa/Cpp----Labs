
/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: E5.6


*/


#include <iostream>
#include <fstream>

using namespace std;

string middle(string str){
string middlecharacter;
	if(str.length()%2 == 0){
		middlecharacter = str.substr((str.length() / 2) + 1);
		cout<< middlecharacter;
	}
	if(str.length()%2 != 0){
		middlecharacter = str.substr((str.length() / 2));
		cout << middlecharacter;
	}
	return middlecharacter;

}


int main(){

string input;
cout<< "Enter a word: ";
cin>> input;
middle(input);
cout<< input;

return 0;
}
