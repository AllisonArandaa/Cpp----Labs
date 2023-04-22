/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab4.F
triangles

*/

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
int width;
int height;
//int spaces;
//int stars;


cout<<"Enter width: "<<endl;
cin>>width;
cout<<"Enter height: "<<endl;
cin>>height;

if (2*(height-1) >= width){
	cout<<"Impossible shape"<<endl;
	return 0;
}else{

for(int i = 0; i<height; i++){
    
    for(int j=height + i; j>0; j--)
        cout<<" ";
   
    
    for(int j=0; j<(width-2 * i); j++){
    cout<< "*";
    //spaces +=1;
    //stars -=2;
    }
    cout<<endl;
 } 
}  
return 0;
}
