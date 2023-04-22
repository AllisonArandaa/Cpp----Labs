/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab4.G
triangles

*/

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
int width;
int height;


cout<<"Enter width: "<<endl;
cin>>width;
cout<<"Enter height: "<<endl;
cin>>height;

int count_stars = 0;
int count_space = 0;

cout<<"Shape"<<endl;

for(int i = 0; i < height; i++){
	
	for(int j=0; j < width; j++){
	
		if((j%6 <3 && i%6 < 3) || (j%6>= 3 && i%6 >= 3)){
			    if(count_stars < 3){
			        cout<<"*";
				}
		        if(count_stars == 3){
				    count_stars = 0;
				}

       }else{
            if(count_space <3){
				cout<<" ";
		    }
		    if(count_space == 3){
				count_space = 0;
			}
		}		
    }
    cout<<endl;
}

return 0;
}
