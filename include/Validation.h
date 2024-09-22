#ifndef VALIDATION_H
#define VALIDATION_H
<<<<<<< HEAD
#include <iostream>
#include <string>
using namespace std;

=======


#pragma once
#include <iostream>
#include <string>
#include <cctype>
using namespace std;
>>>>>>> 1eac900 (fase1,half2)
class Validation
{
public:
	//Methods
<<<<<<< HEAD
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
=======
	static bool validateName(string name) {
		if (!(name.size() >= 5 && name.size() <= 20)) {
			return false;
		}
		for (int i = 0; i < name.length(); i++) {
			if (!(isalpha(name[i]) || name[i] == ' ')) {
				return false;
			}
		}
		return true;
	}
	static bool validatePassword(string password) {
		if (!(password.size() >= 8 && password.size() <= 20)) {
			return false;
		}
		return true;
	}
	static bool validateBalance(double balance) {
		if (balance < 1500) {
			return false;
		}
		else {
			return true;
		}
	}
	static bool validateSalary(int salary) {
		if (salary < 5000) {
			return false;
		}
		else {
			return true;
		}
	}

>>>>>>> 1eac900 (fase1,half2)

};



#endif // VALIDATION_H
