#inc9lude <iostream>
using namespace std;

int main()
{
	cout << "							WELCOME     " << endl;//println or print in java
	cout << "				 	 	SHAREHOLDER'S EQUITY     " << endl;
	system ("pause");
	
	
	// SO DAPAT PUBLIC CLASS TO? SINCE ALL VARIABLES ARE USED.
	//Declare Variables
	int SCP; //Share Capital Preference
	int SSCP; //Subscribed Share Capital Preference
	int SRP; //Subscription Receivable Preference
	int total1;//SSCP-SRP
	int PICP; //Paid In Capital Preference
	int SCO; //Share CapitalOrdinary
	int SSCO; //Subscribed Share CapitalOrdinary
	int SRO; //Subscription Receivable Ordinary
	int total2;//SSCO-SRO
	int PICO; //Paid In CapitalOrdinary
	int TPIC; //Total Paid In Capital
	int APIC; //Addition Paid In Capital
	int TCC; //Total Contributed Capital
	int SPO; //Share Premium Preference
	int SPP; //Share Premium Ordinary
	int RE; //Retained Earnings
	int URE; //Unrestricted Retained Earnings
	int RRE; //Restricted Retained Earnings
	int TS; //Treasury Shares
	int SE; //Shareholders' Equity
	char rerun;// run again declare characters 
	
	//Enter Values
	
		do 
	
	{
	
	
	cout << "Enter Share Capital Preference: " << endl; //names ( java ( "name" + SCP);
	cin >> SCP;
	cout << "Enter Subscribed Share Capital Preference : " << endl;
	cin >> SSCP;
	cout << "Enter Subscription Receivable Preference: " << endl;
	cin >> SRP;	
	cout << "Enter Share Capital Ordinary: " << endl;
	cin >> SCO;
	cout << "Enter Subscribed Share Capital Ordinary: " << endl;
	cin >> SSCO;
	cout << "Enter Subscription Receivable Ordinary: " << endl;
	cin >> SRO;
	cout << "Enter Share Premium Preference: " << endl;
	cin >> SPP;
	cout << "Enter Share Premium Ordinary: " << endl;
	cin >> SPO;
	cout << "Enter Unrestricted Retained Earnings: " << endl;
	cin >> URE;
	cout << "Enter Restricted Retained Earnings: " << endl;
	cin >> RRE;
	cout << "Enter Treasury Shares: " << endl;
	cin >> TS;
	
	//Formulas
	PICP = SCP + SSCP - SRP;
	total1 = SSCP - SRP;
	PICO = SCO + SSCO - SRO;
	total2 = SSCO - SRO;
	TPIC = PICP + PICO;
	APIC = SPP + SPO;
	TCC = APIC + TPIC;
	RE = URE + RRE;
	SE = TCC + RE - TS;
	
	//Show Shareholders Equity
	cout << "						SHAREHOLDERS' EQUITY" << endl;
	cout << "													"<< endl;
	cout << "Paid In Capital" << endl;
	cout << "	Share Capital Preference:					" << SCP << endl;;
	cout << "	Subscribed Share Capital Preference:			" << SSCP << endl;
	cout << "Less Subscription Receivable Preference:			" << SRP ; cout<< "	" << total1 << endl;
	cout << "	Paid In Capital Preference:						" << PICP << endl;
	cout << "	Share Capital Ordinary:						" << SCO << endl;
	cout << "	Subscribed Share Capital Ordinary:			" << SSCO << endl;
	cout << "Less Subscription Receivable Ordinary:				" << SRO ; cout<< "	" << total2 << endl;
	cout << "	Paid In Capital Ordinary:						" << PICO << endl;
	cout << "	Total Paid In Capital:									" << TPIC << endl;
	cout << "Additional Paid In Capital"<< endl;
	cout << "	Share Premium Preference:					" << SPP << endl;
	cout << "	Share Premium Ordinary:						" << SPO << endl;
	cout << "	Total Additional Paid In Capital:							"<< APIC << endl;
	cout << "Total Contributed Capital:									" << TCC << endl;
	cout << "Retained Earnings" << endl;
	cout << "	Unrestricted Retained Earnings:						"<< URE<< endl;
	cout << "	Restricted Retained Earnings:						" << RRE << endl;
	cout << "Total Retained Earnings:									"<< RE << endl;
	cout << "Less 	Treasury Shares										"<< TS << endl;
	cout << "SHAREHOLDERS EQUITY:										" << SE << "			" << endl;
	
cout << "************************************************************************************************************************" << endl ;
		cout << endl << endl;
	
		cout<<"Do you want to run this program again? (y/n):  ";
		cin>>rerun;
			
		}

	while (rerun == 'y' || rerun == 'Y');
	system ("pause");
	
	
	
	return (0);
	
	
}
