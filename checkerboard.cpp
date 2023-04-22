
/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab4.B
checkerboard

*/

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
int width;
int height;

cout<<"Input width: "<<endl;
cin>>width;
cout<<"Input height: "<<endl;
cin>>height;
cout<<endl;
cout<<"Shape: "<<endl;

for(int i = 0; i<height; i++){

    
    for(int j=0; j<width; j++){
        if((i+j) % 2 == 0 ){
             cout<<"*";
		 }
	else 
		{cout<<" ";}      
    }
    cout<<endl;
}
return 0;
}
