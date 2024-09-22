#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#pragma once
#include <iostream>
#include <string>
#include "person.h"
#include "validation.h"
using namespace std;
class Employee:public Person
{
protected:
	//attributes
	double salary;
public:
	//constructors
	Employee():Person() {
		this->salary=0.0;
	}
	Employee(int id,string name,string password,double salary):Person(id,name,password) {
		setSalary(salary);
	}
	//setters
	void setSalary(double salary) {
		if (Validation::validateSalary(salary)) {
			this->salary = salary;
		}
		else {
			cout << "Invalid Salary\n";
		}
	}
	//getters
	double getSalary() {
		return this->salary;
	}
	//methods
	void displayInfo() {
		cout << "======== data of employee " << getName() << " ========\n";
		cout << "name : " << getName() << endl;
		cout << "password : " << getPassword() << endl;
		cout << "salary : " << getSalary() << endl;
		cout << "=======================================================================\n";

	}

};



#endif // EMPLOYEE_H
