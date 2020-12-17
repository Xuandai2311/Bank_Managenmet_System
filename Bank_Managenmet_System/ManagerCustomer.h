#pragma once
#include<vector>
#include <iostream>
#include "Account.h"
class ManagerCustomer
{
private:
	std::vector<Account> listAccount;
	bool checkDataList(std::string id);
public:
	//ManagerCustomer();
	void showListAccount();
	//void showbalances();
	//void transactions();
	//void withdraw();
	//void gotomain();
	//void PrintLOG();
};

