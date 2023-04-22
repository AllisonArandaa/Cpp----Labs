#include <iostream>
#include <fstream>

using namespace std;


	int foo(int n){
        if (n ==0){
        return n;
        }
        if(n%2 == 0){
		return 2 + foo(n/2);
		}
		return 1 + foo(n/2);
	}
int main(){


cout<< foo(21)<< endl;



}
