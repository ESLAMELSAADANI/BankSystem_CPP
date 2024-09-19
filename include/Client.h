#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <string>
#include "Person.h"
#include "Validation.h"
using namespace std;

class Client:public Person{
private:
    double balance;
public:
	//Constructors
	Client():Person() {
        balance=0.0;
	}
	Client(int id,string name,string password,double balance):Person(id,name,password) {
		setBalance(balance);
	}
	//Setters
		void setBalance(double balance) {
		 if (Validation::validateBalance(balance)){
            this->balance=balance;
		 }
		 else{
            cout<<"Invalid balance\n";
            this->balance=0.0;
		 }
	}
	//Getters
	double getBalance() {
		return this->balance;
	}
	//Methods
	void deposit(double amount) {
	    if(amount>0){
            this->balance+=amount;
	    }
	}
	void withdraw(double amount) {
		if(amount<=balance && amount>0){
            this->balance-=amount;
		}
	}
	void transferTo(double amount, Client& recipient) {
		withdraw(amount);
		recipient.deposit(amount);
	}
	void checkBalance() {
		cout << "Your Balance is " << this->balance<<endl;
	}
	void displayInfo() {
		cout << "Name : " << this->getName() << endl;
		cout << "Password : " << this->getPassword() << endl;
		cout << "Balance : " << this->getBalance() << endl;
	}

};

#endif // CLIENT_H
