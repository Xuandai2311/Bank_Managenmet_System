#include "ManagerAll.h"
#include <iostream>
using namespace std;
void ManagerAll::Wellcome()
{
    int i;
    cout << "\n\t*********** BANK MANAGEMENT SYSTEM ***********\n";
    cout << "\n\t\t>>Please Choose Any Option To login \n";
    cout << "\n\t\t1.Customer\n\n\t\t2.Admin\n\n\t\t3.Close Application\n";
    cout << "\n\t\tEnter your choice : ";
    cin >> i;
    if (i == 1)
    {
        system("CLS");
        openMangerCustomer();
    }
    else if (i == 2)
        openMangerAdmin();
    else if (i == 3)
        exit(0);
    else
    {
        cout << "\n\t\tPlease enter correct option :(";

        Wellcome();
    }
}

void ManagerAll::openMangerCustomer()
{
	int index;
    cout << "\n\t*********** WELCOME CUSTOMER ***********\n";
    cout << "\n\t\t>>Please Choose Any Option To login \n";
    cout << "\n\t\t1. Show List Accounts \n";
    cout << "\n\t\t2. Show Balances \n";
    cout << "\n\t\t3. Show Transactions \n";
    cout << "\n\t\t4. Withdraw \n";
    cout << "\n\t\t5. Go To Main Menu \n";
	cout << "\n\t\t6. Close Application \n";
    cout << "\n\t\tEnter your choice : "; cin >> index;
	switch (index)
	{
    case 1: mngCus.showListAccount(); openMangerCustomer(); break;
	//case 2: mngCus.showbalances(); openMangerCustomer();  break;
	//case 3: mngCus.transactions(); openMangerCustomer(); break;
	//case 4: mngCus.withdraw(); openMangerCustomer(); break;
    case 5: system("CLS"); Wellcome(); break;
    case 6: exit(0); break;
	default:
        cout << "\n\t\tPlease enter correct option :(";
        openMangerCustomer();
        break;
	}
}

void ManagerAll::openMangerAdmin()
{
    system("CLS");
    int index;
    cout << "\n\t*********** WELCOME ADMIN ***********\n";
    cout << "\n\t\t>>Please Choose Any Option To login \n";
    cout << "\n\t\t1. Customer \n";
    cout << "\n\t\t2. Open Account \n";
    cout << "\n\t\t3. Deposit Money \n";
    cout << "\n\t\t4. Withdrawal \n";
    cout << "\n\t\t5. Transfers Money \n";
    cout << "\n\t\t6. Go To Main Menu \n";
    cout << "\n\t\t7. Close Application \n";
    cout << "\n\t\tEnter your choice : "; cin >> index;
    switch (index)
    {
    case 1: mngAd.openCustomer(); system("pause"); openMangerAdmin(); break;
    case 2: mngAd.openAccount(); system("pause"); openMangerAdmin(); break;
    case 3: mngAd.depositMoney();  openMangerAdmin(); break;
    case 4: mngAd.withdrawal(); system("pause"); openMangerAdmin(); break;
    case 5: mngAd.transfersMoney(); openMangerAdmin(); break;
    case 6: system("CLS"); Wellcome(); break;
    case 7: exit(0);
    default:
        cout << "\n\t\tPlease enter correct option :(";
        openMangerAdmin();
        break;
    }
}