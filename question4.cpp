//question4

#include <iostream>
#include <string>

using namespace std;


int main(){
    int x = 12;
    int y = 9;
    int *s = &x;
    int *t = s;
    
    s = &y;
    y *=2;
    
    *s = y/3;
    *t = *s + *t;
    
    cout<< x << " " << y << endl;
    
    
}
