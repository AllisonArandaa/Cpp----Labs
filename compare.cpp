/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab3.C


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



double date_2;
double date_3;
double eastSt;
double eastEl;
double westSt;
double westEl;



cout<<"Enter starting date 2018: ";
cin>>date_2;

cout<<"Enter ending date 2018: ";
cin>>date_3;




while(fin >> date_2 >> eastSt >> eastEl >> westSt >> westEl){ 
	fin.ignore(INT_MAX, '\n');
	
	 if(date_2 > eastSt & date_2 >eastEl & date_2 > westSt & date_2 > westEl ){
		
		cout<< date_2<< date_3<<endl;
		
		
    }
	
	//else if(eastSt > MAX){

	//	MAX=eastSt;
		
   // }

    //cout << "minimum storage in East basin:"<< MIN << " billion gallons"<<endl;
    //cout<<"MAXimum storage in East basin:"<< MAX << " billion gallons"<<endl;
    break;
}
fin.close();
return 0;

}
