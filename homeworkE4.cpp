/*Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: E4.8
Write a program that print each character on a separate line 

*/


#include <iostream>
using namespace std;

int main()
{
    string word;
    
    cout<<"Enter a word: "<<endl;
    cin>>word;
    
    for(int i=0; i < word.length(); i++){
        cout<<word.substr(i,1)<<endl;
     }

    return 0;
}
