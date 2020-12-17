#include "CustomerService.h"
#include <iostream>


using namespace std;
bool CustomerService::checkDataList(string customerid)
{
	for (int i = 0; i < ListCustomer.size(); i++) {
		if (ListCustomer[i].getCustomerID() == customerid) {
			return false;
		}
	}
	return true;
}

void CustomerService::showlistCustomer()
{
	for (Customer cus : ListCustomer) {
		cout << cus.toString();
	}
}
void CustomerService::findCustomer()
{
	string customerid;
	cout << "\n\tEnter The Customer ID To Find:  \n"; cin >> customerid;
	for (int i = 0; i < ListCustomer.size(); i++) {
		if (ListCustomer[i].getCustomerID() == customerid) {
			cout << ListCustomer[i].toString();
		}
	}
}
void CustomerService::addCustomer()
{
	string answ = "y";
	while (answ == "y" || answ == "Y")
	{
		std::string customerid, name, address, phone, email;
		std::cout << "\nEnter Customer ID: "; std::cin >> customerid;
		std::cout << "Enter Name: "; std::cin >> name;
		cout << "Enter address: "; cin >> address;
		cout << "Enter Phone: "; cin >> phone;
		cout << "Enter Email: "; cin >> email;
		cout << endl;
		Customer cus(customerid, name, address, phone, email);
		if (checkDataList(customerid)) {
			ListCustomer.push_back(cus);
		}
		else {
			cout << "\n\t\tThe Customer ID is Identical :(";
		}
		cout << "Do You Want To Continue ? Y/N "; cin >> answ;
	}
}

void CustomerService::editCustomer()
{
	string customerid, newcustomerid, newName, newAddress, newPhone, newEmail;
	cout << "\nNhap ID Can sua: "; cin >> customerid;
	for (int i = 0; i < ListCustomer.size(); i++) {
		if (ListCustomer[i].getCustomerID() == customerid) {
			cout << "Nhap ID moi: "; cin >> newcustomerid;
			cout << "Nhap Ten moi: "; cin >> newName;
			cout << "Nhap dia chi moi: "; cin >> newAddress;
			cout << "Nhap soDT moi: "; cin >> newPhone;
			cout << "Nhap Email moi: "; cin >> newEmail;
			if (checkDataList(newcustomerid)) {
				ListCustomer[i].setCustomerID(newcustomerid);
				ListCustomer[i].setName(newName);
				cout << "Sua Member Thanh Cong" << endl;
			}
			else {
				cout << "ID bi trung khong the sua lai" << endl;
			}

		}
	}
}
void CustomerService::deleteCustomer()
{
	string customerid;
	cout << "\nNhap ID Can Xoa: "; cin >> customerid;
	for (int i = 0; i < ListCustomer.size(); i++) {
		if (ListCustomer[i].getCustomerID() == customerid) {
			ListCustomer.erase(ListCustomer.begin() + i);
		}
	}
}