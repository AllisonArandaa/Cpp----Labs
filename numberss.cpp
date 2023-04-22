
/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab5.c


*/

#include <iostream>
#include <fstream>

using namespace std;

bool isPrime( int n){
	//ask about negative numbers
    if(n ==1 || n == 0 || n <= 0){
    return false;
    }
    //Numbers 2 to n-1
    for(int i= 2; i<n; i++){
        if(n % i ==0)
            return false;
            }
            return true;
}

int nextPrime(int N){
	
	N = N+1;
	if(isPrime(N)== true)
    return N;
    
    while(isPrime(N) != true){
    N=N+1;
    }
    return N;
  
    
    
    }
//}

int main()
{


cout<< nextPrime(14);

//for(int i = 1 ; i<=N; i++){
	
	
}
//return 0;

