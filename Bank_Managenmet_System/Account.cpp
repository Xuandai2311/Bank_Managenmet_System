#include "Account.h"

Account::Account(std::string accountid, std::string customerid, float InterestRate, float Balance, std::string Type)
{
	this->accountid = accountid;
	this->customerid = customerid;
	this->InterestRate = InterestRate;
	this->Balance = Balance;
	this->Type = Type;
}

void Account::setAccountID(std::string accountid)
{
	Account::accountid = accountid;
}

void Account::setCustomerID(std::string customerid)
{
	Account::customerid = customerid;
}

void Account::setInterestRate(float InterestRate)
{
	Account::InterestRate = InterestRate;
}

void Account::setBalance(float Balance)
{
	Account::Balance = Balance;
}
void Account::setType(std::string Type)
{
	Account::Type = Type;
}

std::string Account::getAccountID() const
{
	return accountid;
}

std::string Account::getCustomerID() const
{
	return customerid;
}
float Account::getInterestRate() const
{
	return InterestRate;
}
float Account::getBalance() const
{
	return Balance;
}
std::string Account::getType() const
{
	return Type;
}

std::string Account::toString()
{
	return "\nAccountID: " + accountid +
		"\tCustomer ID: " + customerid +
		"\Interest Rate: " + InterestRate +
		"\tBalance " + Balance +
		"\tType: " + Type;
}