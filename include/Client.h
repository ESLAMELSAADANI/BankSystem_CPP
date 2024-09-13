#ifndef CLIENT_H
#define CLIENT_H
#include <iostream>
#include <string>
#include "Person.h"
#include "Validation.h"
using namespace std;

class Client:public Person,Validation
{
private:
	static constexpr double MIN_BALANCE = 1500;
public:
	//Constructors
	Client() {

	}
	Client(string name,string password,double balance):Person(name,password,balance) {
		if(balance < MIN_BALANCE) {
			cout << "Initial balance must be at least " << MIN_BALANCE << ".\n";
			this->balance = MIN_BALANCE;
		}
	}
	//Setters
	void setName(string name) {
		switch (Validation::validateName(name)) {
		case -1:
			cout << "Name must be at least 5 chars\n";
			break;
		case -2:
			cout << "Name must be at less than 20 chars\n";
			break;
		case -3:
			cout << "Name must contain alphabitic chars only\n";
			break;
		case 1:
			this->name = name;
			break;
		default:
			cout << "Unknown Error!\n";
		}
	}
	void setPassword(string password) {
		switch (Validation::validatePassword(password)) {
		case -1:
			cout << "The password is less than 8 chars\n";
			break;
		case -2:
			cout << "The password is greater than 20 chars\n";
			break;
		case 1:
			this->password = password;
		}


	}
	void setBalance(double balance) {
		 if (balance < MIN_BALANCE) {
            cout << "Balance must be at least " << MIN_BALANCE << ".\n";
        } else {
            this->balance = balance;
        }
	}
	//Getters
	string getName() {
		return this->name;
	}
	string getPassword() {
		return this->password;
	}
	double getBalance() {
		return this->balance;
	}
	//Methods
	void deposit(double amount) {
		balance = balance + amount;
	}
	void withdraw(double amount) {
		switch (Validation::validateWithdraw(balance, amount)) {
		case 0:
			cout << "Your balance is not enough.\n";
			break;
		case 1:
			balance -= amount;
		}
	}
	void transferTo(double amount, Client& recipient) {
		if (amount > this->balance - MIN_BALANCE) {
			cout << "Invalid transfer, you must keep account with " << MIN_BALANCE << endl;
		}
		this->balance -= amount;
		recipient.balance += amount;
		cout << "Transfer " << amount << "To " << recipient.getName() << " Successs!\n";
	}
	void checkBalance() {
		cout << "Your Balance is " << this->balance<<endl;
	}
	void printInfo() {
		cout << "Name : " << this->getName() << endl;
		cout << "Password : " << this->getPassword() << endl;
		cout << "Balance : " << this->getBalance() << endl;
	}

};

#endif // CLIENT_H
