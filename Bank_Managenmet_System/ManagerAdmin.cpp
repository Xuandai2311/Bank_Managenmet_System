#include "ManagerAdmin.h"
#include<iostream>
#include"Print.h"
using namespace std;

bool ManagerAdmin::checkDataListAcc(string accountid)
{
	for (int i = 0; i < ListAccount.size(); i++) {
		if (ListAccount[i].getAccountID() == accountid) {
			return false;
		}
	}
	return true;
}
bool ManagerAdmin::checkDataListCus(string customerid)
 {
	for (int i = 0; i < ListCustomer.size(); i++) {
		if (ListCustomer[i].getCustomerID() == customerid) {
			return false;
		}
	}
	return true;
}

void ManagerAdmin::openCustomer()
{
	int index;
	cout << "\n\t*********** WELCOME SERVICE ***********\n";
	cout << "\n\t\t>>Please Choose Any Option To login \n";
	cout << "\n\t\t1. Show List Customer \n";
	cout << "\n\t\t2. Add Customer \n";
	cout << "\n\t\t3. Edit Customer \n";
	cout << "\n\t\t4. Find Customer \n";
	cout << "\n\t\t5. Delete Customer \n";
	cout << "\n\t\t6. Go To Main Menu \n";
	cout << "\n\t\t7. Close Application \n";
	cout << "\n\t\tEnter your choice : "; cin >> index;
	switch (index)
	{
	case 1: CS.showlistCustomer(); openCustomer(); break;
	case 2: CS.addCustomer(); openCustomer();  break;
	case 3: CS.editCustomer(); openCustomer(); break;
	case 4: CS.findCustomer(); openCustomer(); break;
	case 5: CS.deleteCustomer(); openCustomer(); break;
	case 6: system("CLS"); mngAll.openMangerAdmin(); break;
	case 7: exit(0); break;
	default:
		cout << "\n\t\tPlease enter correct option :(";
		openCustomer();
		break;
	}
}

void ManagerAdmin::openAccount()
{
	string answ = "y";
	while (answ == "y" || answ == "Y")
	{
		std::string accountid, customerid, Type, InterestRate, Balance;
		cout << "\tEnter Customer ID: "; cin >> customerid;
		cout << "Enter Account: "; cin >> accountid;
		cout << "Enter Account Type Choose Saving (s) or Current (c): "; cin >> Type;
		cout << "Enter Interest Rate: "; cin >> InterestRate;
		cout << "Enter Amount For Deposit: "; cin >> Balance;
		cout << endl;
		Account ac(accountid, customerid, Type, InterestRate, Balance);
		if (checkDataListCus(customerid)) {
			ListCustomer.push_back(ac);
		}
		else {
			cout << "Customer ID Doesn't Exist" << endl;
		}
		cout << "Do You Want To Continue? ? Yes = Y/No = N "; cin >> answ;
	}
}

void ManagerAdmin::depositMoney()
{
	std::string accountid, customerid, Type, InterestRate, Balance, Bal;
	cout << "\tEnter Account Will You Be Depositing Into: "; cin >> accountid;
	cout << "\tEnter The Amount You Want To Deposit: "; cin >> Bal;
	Balance += Bal;
	Account ac(accountid, customerid, Type, InterestRate, Balance);
	if (checkDataListAcc(accountid)) {
		ListAccount.push_back(ac);
	}
	else {
		cout << "Account ID Doesn't Exist" << endl;
	}
	cout << "\tYour Current Balance is: " << Balance << endl;
}



