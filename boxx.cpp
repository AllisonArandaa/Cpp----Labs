
/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab4.A
BOX

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

for(int i = 0; i<height; i++){
    cout<< "*" ;
    
    for(int j=0; j<width; j++){
        cout<<"*";
      
    }
    cout<<endl;
}

}


