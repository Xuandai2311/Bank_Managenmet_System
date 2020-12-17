#pragma once
#include <iostream>
#include "Customer.h"
class Account :public Customer
{
private:
	std::string accountid, customerid, InterestRate, Balance, Type;
public:
	Account(std::string accountid, std::string customerid, std::string InterestRate, std::string Balance, std::string Type);
	void setAccountID(std::string accountid);
	void setCustomerID(std::string customerid);
	void setInterestRate(std::string InterestRate);
	void setBalance(std::string Balance);
	void setType(std::string Type);
	std::string getAccountID() const;
	std::string getCustomerID() const;
	std::string getInterestRate() const;
	std::string getBalance() const;
	std::string getType() const;
	std::string toString();
};

