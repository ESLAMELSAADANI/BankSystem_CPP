#ifndef VALIDATION_H
#define VALIDATION_H
#include <iostream>
#include <string>
using namespace std;

class Validation
{
public:
	//Methods
	static int validateName(string name) {
		if (name.length() < 5) {
			return -1;
		}
		if (name.length() > 20) {
			return -2;
		}
		for (int i = 0; i < name.length(); i++) {
			if (!(name[i] >= 'A' && name[i] <= 'Z' || name[i] >= 'a' && name[i] <= 'z')) {
				return -3;
			}
		}
		return 1;
	}
	static int validatePassword(string password) {
		if (password.length() < 8) {
			return -1;
		}
		if (password.length() > 20) {
			return -2;
		}
		return 1;
	}
	static int validateWithdraw(double balance, double amount) {
		if (amount > balance) {
			return 0;
		}
		else {
			return 1;
		}
	}

};



#endif // VALIDATION_H
