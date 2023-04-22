/* Using only loop for - Task A*/
#include <iostream>
#include <string>

using namespace std;



int main(){

int numeros;
int value =0;

	     for (int i=0; i<100; i++){
			 //cout<<"please enter an integer: "<<endl;
			 
			 if(numeros>0 && numeros<100){
		         cout<<"Please enter an integer: "<<endl;
                 cin>>numeros;
             }else{
	             cout<<"Please enter an integer: "<<endl; //check this//
	             cin>>numeros;
                }
             value = numeros * numeros;
             cout<<"Number squared: "<<value<<endl;
             
            }

	return 0;
}
