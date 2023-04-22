/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab7.B


*/

#include <iostream>
#include <string>
using namespace std;

string removeLeadingSpaces(string line) {
	string result = "";
	bool check = true;
	for(int i = 0; i < line.size(); i++) {
	if(!(check && isspace(line[i]))) {
	result += line[i];
	check = false;
	}
	}
return result;
}


int countChar(string line, char c){
	
	for(int i=0; i< line.size() ; i++){
		

		
			}
}
	
return ;
}

int main() {
string line;
while(getline(cin, line)) {
cout << removeLeadingSpaces(line) << endl;
}
return 0;
}
