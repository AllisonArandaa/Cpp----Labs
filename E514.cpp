
/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: E5.14


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



int main(){
int u = 2;
int v = 3;
int w = 4;
int x = 1;
sort2(u,v);
sort2(w, x);

cout<<"u: "<< u << endl;
cout<<"v: "<< v << endl;
cout<<"w: "<< w << endl;
cout<<"x: "<< x << endl;
return 0;
}
