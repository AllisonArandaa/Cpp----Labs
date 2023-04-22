
/*
Author: Allison Aranda
Course: CSCI-136
Instructor: Enxhi Osmanllari
Assignment: Lab5.G


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

int countPrimes(int a, int b){
	int count = 0;
	for(int i = a; i <= b; i++)	
	{
		if( isPrime(i) )
		{
			count++;
		}
	}
	return count;
}

bool isTwinPrime(int n){
	if(isPrime(n+2) && isPrime(n)){
		return true ;
	}
	if(isPrime(n-2) && isPrime(n)){
		return true;
	}
	return false;
	
}

int nextTwinPrime(int n){
	n++;
	while(isTwinPrime(n) !=true){
		n=n+1;
		}
	return n;
	
	
	}

int largestTwinPrime(int a, int b){
	
	
	for(int i = b ; i>=a; i--){
	if(isTwinPrime(i)){
		
		return i;
	}
    
    
    }
    return -1;
	
}	

int main()
{

cout<< largestTwinPrime(5,18);
//cout<< boolalpha << isTwinPrime(17);

	
	
}


