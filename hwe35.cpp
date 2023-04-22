Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: E3.5
Write a program that reads an integer and 
* prints whether it is negative, zero, or positive

*/


#include <iostream>
using namespace std;

int main()
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;

	cout << " Enter 3 numbers : "<<endl;
    cin >> number1;
    cin>> number2;
    cin>> number3;
    
    if(number1 > 0&&)
    {
        cout << " Increasing."<<endl;
    }
    else if(number < 0)
    {
        cout << " Decresing"<<endl;
    }
    else
    {
        cout << " neither"<<endl;
    }
    return 0;
}
