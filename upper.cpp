
/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab4.E
triangles

*/

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
int lenght;


cout<<"Input side length: "<<endl;
cin>>lenght;
cout<<"Shape: "<<endl;

for(int i = lenght; i>=1; i--){
    
    for(int n= lenght-i; n>0; n--)
		cout<<" ";
		
	for(int j=i; j>0;j--){
        cout<<"*";
	
	
}
    cout<<endl;
}
return 0;
}
