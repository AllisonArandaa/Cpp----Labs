
/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab quiz 4


*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;
int main()
{
ifstream fin("data.txt");
if (fin.fail()) {
    cerr << "File cannot be opened for reading." << endl;
    exit(1); 
}

string junk;     
getline(fin, junk); 

while(colors>> hex){


cout << colors << " " << hex <<endl;
		
 }   
fin.close();
return 0;

}


