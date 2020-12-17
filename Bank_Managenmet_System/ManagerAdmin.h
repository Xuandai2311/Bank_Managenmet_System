#pragma once
#include <vector>
#include <iostream>
#include "Account.h"
#include "Customer.h"
#include "ManagerAll.h"
#include "CustomerService.h"
class ManagerAdmin
{
private:
	vector<Account> ListAccount;
	vector<Customer> ListCustomer;
	bool checkDataListAcc(std::string accountid);
	bool checkDataListCus(std::string customerid);
	CustomerService CS;
	ManagerAll mngAll;
public:
	//ManagerAdmin();
	void openCustomer();
	void openAccount();
	void depositMoney();
	void withdrawal();
	void transfersMoney();
	//void PrintLOG();
};

