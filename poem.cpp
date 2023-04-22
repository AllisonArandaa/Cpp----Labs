//Author: Allison Aranda
//Course: CSCI 135
//Instructor: Maryash
//Assigment: lab 9.D


#include <iostream>
using namespace std;

string * createAPoemDynamically() {
    string *p = new string;
    *p = "Roses are red, violets are blue";
    return p;
}

int main() {
    while(true) {
        string *p;
        p = createAPoemDynamically();
        
        if(!p){
        cout << "Memory allocation failed" <<endl;
        
        }
        
        cout<< *p << endl;

        // assume that the poem p is not needed at this point
        delete p;

    }
}
