/* question5, write a code snippet that uses an array of pointers and
dynamic memory to initialize a 8 by 8 array of integers. Also deallocate
and print them */

#include <iostream>
#include <string>

using namespace std;
int main(){
	int *array[8];
	for(int i=0; i<8; i++){
		array [i] = new int[8];
	}
	//asigning elements
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			array [i][j]= 1;
		}
	}
    //print all
	for(int i=0; i<8; i++){
		for(int j=0; j<8; j++){
			cout<< array[i][j]<<" ";
		}
		cout<<endl;
	}
	//deallocate
	for(int i=0; i<8; i++){
		delete[] array[i];
		array[i]=nullptr;
	}
    
}
