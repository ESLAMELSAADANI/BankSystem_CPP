#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;
class Person
{
protected:
	//Attributes
	static int clientsID, EmployeesID, adminsID;
	string name,password;
	int salary =0;
	double balance = 0.0;
public:
	Person() {

	}
	//Constructors
	Person(string name, string password, double balance) {
		this->name = name;
		this->password = password;
		this->balance = balance;

	}
	Person(string name, string password,int salary, double balance) {
		this->name = name;
		this->password = password;
		this->salary = salary;
		this->balance = balance;

	}
};



#endif // PERSON_H
