/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab1 C

A leap year or a common year?
*/

#include <iostream>
using namespace std;

int main() {

int year = 0;

cout<< "Enter a year: " <<endl;
cin>>year;

if(year % 4 != 0) {
cout << "common year"<<endl;
}

else if( year % 100 !=0){
cout <<"leap year"<<endl;
}
else if(year % 400 !=0){
cout <<"common year"<<endl;
}
else{
cout<<"Leap Year"<<endl;
}


}
