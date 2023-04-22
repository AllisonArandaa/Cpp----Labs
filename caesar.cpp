/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab6.B


*/



#include <iostream>
#include <string>

using namespace std;

char shiftChar(char c, int rShift);
string encryptCaesar(string str, int rShift);

int main()
{
string str;
cout << "Enter plaintext: ";
getline(cin, str);
int key;
cout << "Enter shift : ";
cin >> key;
cout << "Ciphertext : " << encryptCaesar(str, key) << endl;
}

char shiftChar(char c, int rShift) {
if(c >= 'A' && c <= 'Z')
c = 'A' + (c-'A'+rShift+26)%26;
if(c >= 'a' && c <= 'z')
c = 'a' + (c-'a'+rShift+26)%26;
return c;
}

string encryptCaesar(string str, int rShift) {
string res = "";
char ch;
for(int i = 0; i < str.length(); ++i) {
res += shiftChar(str[i], rShift);
}
return res;
}

