#include "ManagerCustomer.h"
#include<iostream>
#include<vector>
#include"Print.h"
using namespace std;

void ManagerCustomer::showListAccount()
{
	for (Account ac : listAccount) {
		cout << ac.toString();
	}
}


bool ManagerCustomer::checkDataList(string accountid)
{
	for (int i = 0; i < listAccount.size(); i++) {
		if (listAccount[i].getAccountID() == accountid) {
			return false;
		}
	}
	return true;
}
