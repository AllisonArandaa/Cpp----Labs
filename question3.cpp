//3 what is the output of the following code?

#include <iostream>
#include <string>

using namespace std;
int main(){
    float arr[5] = {0.5, 0.75, 0.25, 1.25, 1.50};
    float * ptr = arr;
    ptr[2] += 1.75;
    ptr++;
    *ptr +=0.25;
    
    for(float f : arr){
		cout<< f<< " ";
		}
    
}
