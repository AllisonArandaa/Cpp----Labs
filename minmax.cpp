/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab3.B


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
double eastSt;
double eastEl;
double westSt;
double westEl;
double MIN=59.94;
double MAX=81.07;




while(fin >> date >> eastSt >> eastEl >> westSt >> westEl){ 
	fin.ignore(INT_MAX, '\n');
	 if(eastSt <= MIN){
		
		MIN=eastSt;
		
    }
	
	else if(eastSt > MAX){

		MAX=eastSt;
		
    }

    cout << "minimum storage in East basin:"<< MIN << " billion gallons"<<endl;
    cout<<"MAXimum storage in East basin:"<< MAX << " billion gallons"<<endl;
    break;
}
fin.close();
return 0;

}
