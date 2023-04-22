//Author: Allison Aranda
//Course: CSCI 135
//Instructor: Maryash
//Assigment: Homework e8.1


#include <iostream>

#include <fstream>

using namespace std;

int main() {

string str;

fstream file;

file.open("hello.txt");


file << "Hello, World!" << endl;

file.close();

file.open("hello.txt");


getline(file, str);


cout << str << endl;


file.close();

return 0;

}
