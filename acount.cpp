
#include <iostream>
#include <string.h>
using namespace std;

class Account{
    private:
        string firstName;
        string lastName;
        string accountNum;
        string pin;
        int balance;
        
        string generateAccountNumber(){
            string an_str = "";
            for(int i{0}; i < 8; i++ ){
                int temp = rand() % 10;
                an_str += to_string(temp);
            }
            return an_str;
        }
      
    public:
        Account(){
            this->firstName = "anonymous";
            this->lastName = "anonymous";
            this->pin = "0000";
            this->balance = 0;
            this->accountNum = generateAccountNumber();
        }
        
        Account(string firstName, string lastName, string pin){
            this->firstName = firstName;
            this->lastName = lastName;
            this->accountNum = generateAccountNumber();
            this->balance = 0; 
            
            if(pin.length() == 4){
                this->pin = pin;
            }
            else{
                this->pin = "0000";
            }
        }
        
        void setFirstName(string firstName){
            this->firstName = firstName;
        }
        
        void setLastName(string lastName){
            this->lastName = lastName;
        }
        
        void setPin(string pin){
            if(pin.length() == 4){
                this->pin = pin;
            }
        }
        
        string getFirstName(){
            return firstName;
        }
        
        string getLastName(){
            return lastName;
        }
        
        string getAccountNumber(){
            return accountNum;
        }
        
        string getPin(){
            return pin;
        }
        
        int getBalance(){
            return balance;
        }
        
        bool transaction(int amountTransacted){
            if(amountTransacted > getBalance()){
                return false;
            }
            balance = balance - amountTransacted;
            return true;
        }
};

