
/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: E5.15


*/


#include <iostream>
#include <fstream>

using namespace std;

void sort2(int& a, int& b){
	if(a>b){
		int t = a;
		a = b;
		b = t;
	}
}

void sort3(int& a, int& b, int& c){
	sort2(b,c);
	sort2(a,c);
	sort2(a,b);
	
}	

int main(){
int v = 3;
int w = 4;
int x = 1;
sort3(v, w, x);

cout<<"v: "<< v << endl;
cout<<"w: "<< w << endl;
cout<<"x: "<< x << endl;
return 0;
}
