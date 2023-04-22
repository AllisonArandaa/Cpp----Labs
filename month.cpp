/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab1 D

Number of days in a given month
*/


#include <iostream>
using namespace std;


int main() {
int year;
int month;

cout<<"Enter a year: "<<endl;
cin>>year;

cout<<"Enter a month: "<<endl;
cin>>month;

if(month == 1 or month==3 or month==5 or month==7 or month==8 or month ==10 or month == 12 ){
	cout << "31 days"<<endl;
}
else if( month == 4 or month==6 or month==9 or month==11){
    cout <<"30 days";
	}
else if( month == 2){
	if ((year % 400 ==0) or (year % 4 ==0 && year % 100 != 0)){
		cout<< "29 days"<<endl;
		}
	else 
		cout<< "28 days";
	}

}
