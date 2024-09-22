#ifndef FILEMANAGER_H
#define FILEMANAGER_H


#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
#include "DataSourceInterface.h"
class FileManager :public  DataSourceInterface
{
public:
	static void addClientToFile(Client& client) {
		fstream file("Clients.txt",ios::out | ios::app);
		if (file.is_open()) {
			file << client.getId() << "|" << client.getName() << "|" << client.getPassword() << "|" << client.getBalance() << endl;
			file.close();
			cout << "Client data saved successfully!" << endl;
		}
		else {
			cerr << "Error opening Clients.txt file!" << endl;
		}
	}
	static void  addEmployeeToFile(Employee& employee) {
		fstream file("Employees.txt",ios::out | ios::app);
		if (file.is_open()) {
			file << employee.getId() << "|" << employee.getName() << "|" << employee.getPassword() << "|" << employee.getSalary() << endl;
			file.close();
			cout<< "Employee data saved successfully!" << endl;
		}
		else {
			cerr<< "Error opening Employees.txt file!" << endl;
		}
	}
	static void addAdminToFile(Admin& admin) {
		fstream file("Admins.txt",ios::out | ios::app);
		if (file.is_open()) {
			file << admin.getId() << "|" << admin.getName() << "|" << admin.getPassword() << "|" << admin.getSalary() << endl;
			file.close();
			cout << "Admin data saved successfully!" << endl;
		}
		else {
			cerr<< "Error opening Admins.txt file!" << endl;
		}
	}
};





#endif // FILEMANAGER_H
