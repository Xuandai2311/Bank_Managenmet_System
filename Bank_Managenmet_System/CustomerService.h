#pragma once
#include <iostream>
#include <vector>
#include "Account.h"
#include "Customer.h"
#include "ManagerAdmin.h"
class CustomerService
{
private:
	std::vector<Customer> ListCustomer;
	bool checkDataList(std::string customerid);
public:
	void showlistCustomer();
	void findCustomer();
	void addCustomer();
	void editCustomer();
	void deleteCustomer();
};

