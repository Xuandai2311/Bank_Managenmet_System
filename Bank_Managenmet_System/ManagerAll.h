#pragma once
#include <iostream>
#include "ManagerCustomer.h"
#include "ManagerAdmin.h"

class ManagerAll
{
private:
	ManagerCustomer mngCus;
	ManagerAdmin mngAd;

public:
	void Wellcome();
	void openMangerCustomer();
	void openMangerAdmin();
};

