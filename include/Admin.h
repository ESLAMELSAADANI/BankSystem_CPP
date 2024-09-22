#ifndef ADMIN_H
#define ADMIN_H


#pragma once
#include "Employee.h"
class Admin:public Employee
{
public:
	//constructors
	Admin() :Employee(){

	}
	Admin(int id,string name,string password,double salary):Employee(id,name,password,salary) {

	}
	//Methods
	void displayInfo() {
		cout << "======== data of Admin " << getName() << " ========\n";
		cout << "name : " << getName() << endl;
		cout << "password : " << getPassword() << endl;
		cout << "salary : " << getSalary() << endl;
		cout << "=======================================================================\n";
	}
};



#endif // ADMIN_H
