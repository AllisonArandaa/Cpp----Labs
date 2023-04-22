//need a hand here

#include <iostream>
#include <string>

using namespace std;


int main(){

int size = 10;
double myData[size];


 for(int i = 1 ; i < size; i++){
	 myData[i] = i;
    cout<<myData[i];
}
int index=0;
int newvalue=0;

cout<<"Input index: "<<endl;
cin>>index;
cout<<"Input value: "<<endl;
cin>>newvalue;
 
    if(index<=0 && index < 10){
		 size = newvalue;
	     for(int i = 1 ; i < 10; i++){
	        myData[i] = i;
            cout<<myData[i];
         
		}
         
	
    }else{
	    cout<<"Index out of range"<<endl;
    }

	return 0;
}
