#pragma once
#include <iostream>
class Customer
{
private:
	std::string customerid, name, address, phone, email;
public:
	Customer(std::string customerid, std::string name, std::string address, std::string phone, std::string email);
	void setName(std::string name);
	void setCustomerID(std::string customerid);
	void setAddress(std::string address);
	void setPhone(std::string phone);
	void setEmail(std::string email);
	std::string getName() const;
	std::string getCustomerID() const;
	std::string getAddress() const;
	std::string getPhone() const;
	std::string getEmail() const;
	std::string toString();
};

