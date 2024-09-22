#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>
#include "Client.h"
#include "Employee.h"
#include "Validation.h"
#include "Admin.h"
#include "FileManager.h"
using namespace std;
int main()
{
	//===============Test Client===================
	/*Client Mimo("Eslam Elsaadany", "123456789", 1000);
	Client Himo("Karim Mostafa", "56589555313", 4500);
	Mimo.displayInfo();
	Himo.displayInfo();*/

	////===============Test Employee===================
	//Employee Eslam("Eslam Elsaadany", "22222255555", 50001);
	//Eslam.displayInfo();
	//
	//Employee Karim("Karim Mostafa", "55558878855", 4000);
	//Karim.displayInfo();

	////===============Test Admin===================
	/*Admin Ahmed(100, "Ahmed Mohamed", "123598745", 5000);
	Ahmed.displayInfo();*/

	Client Eslam(1, "Eslam Elsaadany", "Eslam 123", 1600);
	Employee Mohamed(100, "Mohamed Ahmed", "Mohamed 123", 5500);
	Admin Saed(1000, "Saed Ashraf", "Saed 123", 6500);

	FileManager::addClientToFile(Eslam);
	FileManager::addEmployeeToFile(Mohamed);
	FileManager::addAdminToFile(Saed);
}

