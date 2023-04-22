
/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab4.C
cross

*/

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
int size;


cout<<"Input size: "<<endl;
cin>>size;
cout<<"Shape: "<<endl;

for(int i = 1; i<=size; i++){
    
    for(int j= 1; j<=size; j++){
		
		if(j ==i || j==(size + 1 - i))
            cout<<"*";
        else
            cout<<" ";
}
    cout<<endl;
}
return 0;
}
