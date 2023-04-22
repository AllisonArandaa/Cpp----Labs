
/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Quiz


*/

#include <iostream>
#include <fstream>

using namespace std;

int max3( int a, int b, int c){
    if( a > b & a > c){
    return a;
    }
    if( b > a & b > c){
    return b;
    }else{
    return c;
    }
}
int main()
{
cout << max3(-5, 10, 15)<< endl;


return 0;
}
