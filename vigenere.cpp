/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab6.C


*/



#include <iostream>
#include <string>

using namespace std;



string encryptVigenere(string str, string keyword) {
string res = "";
char ch;
int ind=0, key;
for(int i = 0; i < str.length(); ++i) {
ch = str[i];
if(ch >= 'A' && ch <= 'Z') {
key = keyword[ind] - 'a';
ind = (ind+1)%keyword.length();
ch = 'A' + (ch-'A'+key+26)%26;
}
if(ch >= 'a' && ch <= 'z') {
key = keyword[ind] - 'a';
ind = (ind+1)%keyword.length();
ch = 'a' + (ch-'a'+key+26)%26;
}
res += ch;
}
return res;
}



int main()
{
string str;
cout << "Enter plaintext: ";
getline(cin, str);
string key;
cout << "Enter keyword : ";
cin >> key;
cout << "Ciphertext : " << encryptVigenere(str, key) << endl;
}
