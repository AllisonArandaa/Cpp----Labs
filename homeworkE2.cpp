


/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: E2.10

Write a program that asks the user to input

•The number of gallons of gas in the tank

•The fuel efficiency in miles per gallon

•The price of gas per gallon

Then print the cost per 100 miles and how far the car can go with the gas in the tank

*/



#include <iostream>
#include <string>

using namespace std;

int main(){
int gallons;
int miles;
int price;

cout<<"Write the number of gallons of gas in the tank: "<<endl;
cin>>gallons;

cout<<"Write the fuel efficiency in miles per gallon: "<<endl;
cin>>miles;

cout<<"Write the price of gas per gallon: "<<endl;
cin>>price;

cout<<"Cost per 100 miles: "<<(100*gallons)/price<< endl;
cout<<"How far the car can go with the gas in the tank: "<< 100*gallons<<endl;

	
	return 0;


}
