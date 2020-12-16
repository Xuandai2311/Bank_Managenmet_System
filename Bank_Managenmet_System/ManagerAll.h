#pragma once
#include <iostream>
#include "ManagerCustomer.h"
#include "ManagerAdmin.h"

class ManagerAll
{
private:
	ManagerCustomer mngCus;
	ManagerAdmin mngAd;
	void openMangerCustomer();
	void openMangerAdmin();
public:
	void Wellcome();
};

