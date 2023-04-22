
/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab4.D
cross

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

for(int i = 1; i<=lenght; i++){
    
    for(int j= 1; j<=i; j++){
        cout<<"*";
}
    cout<<endl;
}
return 0;
}
