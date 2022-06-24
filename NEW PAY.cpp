#include<iostream>
#include <iomanip> 
using namespace std;

int main()
{
	//declare variables
	int code=0;
	double currentPay=0.0;
	double raise=0.0;
	double newPay=0.0;
	const double RATE1=.03;
	const double RATE2=.04;
	const double RATE3=.05;
	char rerun;
	
	
do {
	cout << "Pay code: ";
	cin >> code;
	cout << "Current Pay: $";
	cin >> currentPay;
	
	if (code == 4||code == 9)
		raise = currentPay * RATE3;
	else if (code == 2 || code == 10)
		raise = currentPay * RATE2;
	else
		raise = currentPay * RATE1;
	
	newPay = currentPay + raise;
	
	
	cout << fixed << setprecision (2);
	cout << "New Pay: $" << newPay << endl;
	
		
	cout << endl << endl;
	
		cout<<"Do you want to run this program again? (y/n):  ";
		cin>>rerun;
			
		}

	while (rerun == 'y' || rerun == 'Y');
	
	system ("pause");
	return (0);
}
