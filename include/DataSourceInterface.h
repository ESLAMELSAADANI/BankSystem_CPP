#ifndef DATASOURCEINTERFACE_H
#define DATASOURCEINTERFACE_H


#pragma once
#include <iostream>
#include <string>
#include "Client.h"
#include "Employee.h"
#include "Admin.h"
using namespace std;
class DataSourceInterface
{
public:
	//Abstracted Methods
	virtual void addClient(Client& client) = 0;
	virtual void addEmployee(Employee& employee) = 0;
	virtual void addAdmin(Admin& admin) = 0;
	virtual void getAllClients() = 0;
	virtual void getAllEmployee() = 0;
	virtual void getAllAdmins() = 0;
	virtual void removeAllClients() = 0;
	virtual void removeAllEmployees() = 0;
	virtual void removeAllAdmins() = 0;
};



#endif // DATASOURCEINTERFACE_H
