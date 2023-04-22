//Author: Allison Aranda
//Course: CSCI 135
//Instructor: Maryash
//Assigment: quiz

#include <iostream>
#include <cmath>
using namespace std;

class Money{
	public:
	int dollars, cents;
	
	Money(int dollars, int cents){
		this -> dollars = dollars;
		this -> cents = cents;
	}
};

Money withdraw_money(Money balance, Money withdrawal){
	int total = balance.dollars*100 + balance.cents;
	int withdraw = withdrawal.dollars*100 + withdrawal.cents;
	if(withdraw > total){
		return Money (0,0);
	}
	
	total -= withdraw;
	balance.dollars = total/100;
	balance.cents = total%100;
	return balance;
	
}

int main(){
	Money starting (100,0);
	Money withdrawal(2,75);
	Money ending = withdraw_money(starting, withdrawal);
	cout<< "$"<< ending.dollars << "." << ending.cents<< endl;
}
