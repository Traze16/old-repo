#include <iostream>
using namespace std;

int main()
{
	cout << "SHAREHOLDER'S EQUITY     ";
	system ("pause");
	
	double SC = 0.0; //Share Capital
	double SSC = 0.0; //Subscribed Share Capital
	double SR = 0.0; //Subscription Receivable
	double TPIC= 0.0; //Total Paid In Capital
	double APIC = 0.0; //Addition Paid In Capital
	double TCC = 0.0; //Total Contributed Capital
	double SP = 0.0; //Share Premium
	double RE = 0.0; //Retained Earnings
	double URE = 0.0; //Unrestricted Retained Earnings
	double RRE = 0.0; //Restricted Retained Earnings
	double TS = 0.0; //Treasury Shares
	int SE; //Shareholders' Equity

	cout << "Enter Share Capital: ";
	cin >> SC;
	cout << "Enter Subscribed Share Capital: ";
	cin >> SSC;
	cout << "Enter Subscription Receivable: ";
	cin >> SR;
	cout << "Share Premium: ";
	cin >> SP;
	cout << "Unrestricted Retained Earnings: ";
	cin >> URE;
	cout << "Restricted Retained Earnings: ";
	cin >> RRE;
	cout << "Treasury Shares: ";
	cin >> TS;
	
	TPIC = SC + SSC - SR;
	APIC = SP;
	TCC = APIC + TPIC;
	RE = URE - RRE;
	SE = TCC + RE - TS;
	
	cout << "SHAREHOLDERS EQUITY: " << SE << "     ";
	
	system ("pause");
	return (0);
	
	
}
