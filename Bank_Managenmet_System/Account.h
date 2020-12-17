#pragma once
#include <iostream>
#include "Customer.h"
class Account 
{
private:
	std::string accountid, customerid, Type;
	float InterestRate, Balance;
public:
	Account(std::string accountid, std::string customerid, float InterestRate, float Balance, std::string Type);
	void setAccountID(std::string accountid);
	void setCustomerID(std::string customerid);
	void setInterestRate(float InterestRate);
	void setBalance(float Balance);
	void setType(std::string Type);
	std::string getAccountID() const;
	std::string getCustomerID() const;
	float getInterestRate() const;
	float getBalance() const;
	std::string getType() const;
	std::string toString();
};

