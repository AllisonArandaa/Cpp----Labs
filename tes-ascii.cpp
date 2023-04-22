
/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab6.A
triangles

*/

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
string input;	
	
cout<< "Input: "<<endl;
cin>> input;

for(int i=0; i< input.length(); i++){
    cout<<input[i]<<" "<< (int)input[i] <<endl;

}

return 0;
}
