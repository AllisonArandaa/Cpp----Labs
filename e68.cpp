/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: E6.8

that checks whether two arrays have the same elements in the same order.

*/

#include <iostream>
#include <string>
using namespace std;

bool equals(int a[], int a_size, int b[], int b_size){
	if (a_size != b_size){
		return false;
		}
	
	for(int i =0; i< a_size; i++){
		if( a[i] != b[i]){
		return false;
		
		}
	}
	return true;
}




int main() {
	//int a_size,b_size;
	
 const int a_size = 8;
 const int b_size = 9;
 int arr1[a_size] = {1, 2, 3, 4, 5, 6, 7, 8};
 int arr2[a_size] = {1, 2, 3, 4, 5, 6, 7, 8};
 int arr3[b_size] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
 int arr4[a_size] = {1, 2, 3, 4, 5, 4, 7, 8};
 cout << "Arrays 1 and 2 are ";
 
 if (!equals(arr1, a_size, arr2, a_size)){
	cout << "not ";
 }
 
 cout << "equal." << endl;
 cout << "Arrays 1 and 3 are ";
 
 if (!equals(arr1, a_size, arr3, b_size)){
	cout << "not ";
 }
 cout << "equal." << endl;
 cout << "Arrays 1 and 4 are ";
 if (!equals(arr1, a_size, arr4, a_size)){
	cout << "not ";
 }
 cout << "equal." << endl;
 
 return 0;
}


