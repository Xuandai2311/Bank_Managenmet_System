#include "Customer.h"

Customer::Customer(std::string id, std::string name, std::string address, std::string phone, std::string email)
{
	this->customerid = customerid;
	this->name = name;
	this->address = address;
	this->phone = phone;
	this->email = email;
}

void Customer::setCustomerID(std::string accountid)
{
	Customer::customerid = customerid;
}

void Customer::setName(std::string name)
{
	Customer::name = name;
}

void Customer::setAddress(std::string address)
{
	Customer::address = address;
}
void Customer::setPhone(std::string phone)
{
	Customer::phone = phone;
}
void Customer::setEmail(std::string email)
{
	Customer::email = email;
}

std::string Customer::getName() const
{
	return name;
}

std::string Customer::getCustomerID() const
{
	return customerid;
}
std::string Customer::getAddress() const
{
	return address;
}
std::string Customer::getPhone() const
{
	return phone;
}
std::string Customer::getEmail() const
{
	return email;
}

std::string Customer::toString()
{
	return "\nCustomer ID: " + customerid +
		"\tName: " + name +
		"\tAddress: " + address +
		"\tPhone: " + phone +
		"\tEmail: " + email;
}