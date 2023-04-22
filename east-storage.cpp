/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab3.A


*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;
int main()
{
ifstream fin("Current_Reservoir_Levels.tsv");
if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); 
}

string junk;     
getline(fin, junk); 


string date;
string udate;
double eastSt;
double eastEl;
double westSt;
double westEl;



cout<<"Enter date 2018: ";
cin>>udate;


while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){ 
	fin.ignore(INT_MAX, '\n');
	if(date == udate){
		
		

		cout << "East basin storage: "<< eastSt << " billion gallons"<<endl;
		
    }
}
fin.close();
return 0;

}


