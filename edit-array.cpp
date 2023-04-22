/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Task c

Print all integers
*/

/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Task B

Print all integers
*/

#include <iostream>
using namespace std;

int main() {
	
int	mydata[10];
int index;
int value;
	
	
	for(int i =0; i<10; i++){
	    mydata[i]=1;
	    cout<<mydata[i]<<" ";
	    }
	    
	do{
	    
	 cout<<"Input index: "<<endl;
	 cin>>index;
	 cout<<"Input new value: "<<endl;
	 cin>>value;
	 
	 mydata[index] = value;
	 for(int i =0; i<10; i++)
	    cout<<mydata[i]<<" ";
	 

	}while(0 <= index && index< 10);

	
	if(index>=10 || index<0){
	    cout<<"Index out of range. Exit.";
	    
	}

}
