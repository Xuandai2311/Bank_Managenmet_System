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
