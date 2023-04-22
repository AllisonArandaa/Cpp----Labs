#include <iostream>
#include <string>
//Using pinter arithmetic, output the value of arr[3]//
using namespace std;
int main(){
    int arr[10] = {3,8,-5,4,0,3,4,9,1,2};
    int *ptr = arr;
    ptr +=3;
    cout<<*ptr<<endl;
    
}
