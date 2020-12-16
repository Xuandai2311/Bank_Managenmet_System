#pragma once
#include<vector>
#include <iostream>
#include "Account.h"
class ManagerAdmin
{
private:
	std::vector<Customer> ListCustomer;
	bool checkDataList(std::string customerid);
public:
	ManagerAdmin();
	void showlistCustomer();
	void findCustomer();
	void addCustomer();
	void editCustomer();
	void deleteCustomer();
	void gotomain();
	void PrintLOG();
};

