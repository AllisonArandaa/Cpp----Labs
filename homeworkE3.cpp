
/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: E3.1
Write a program that reads an integer and 
* prints whether it is negative, zero, or positive

*/


#include <iostream>
using namespace std;

int main()
{
    int number = 0;

	cout << " Enter a number : "<<endl;
    cin >> number;
    
    if(number > 0)
    {
        cout << " The entered number is positive."<<endl;
    }
    else if(number < 0)
    {
        cout << " The entered number is negative."<<endl;
    }
    else
    {
        cout << " The number is zero."<<endl;
    }
    return 0;
}
