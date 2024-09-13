#include <iostream>
#include <string>
#include "Client.h"
using namespace std;
int main()
{
	Client Eslam, Karim("KarimMostafa","555555555555",1000);
	Eslam.setName("EslamElsaadany");
	Eslam.setPassword("123456789");
	Eslam.setBalance(3000);
	Eslam.printInfo();

	Eslam.deposit(1500);
	Eslam.printInfo();

	Eslam.withdraw(4600);
	Eslam.printInfo();


	Eslam.transferTo(1500, Karim);
	Eslam.printInfo();

	Karim.printInfo();




}

