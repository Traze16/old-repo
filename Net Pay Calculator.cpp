#include <iostream>
using namespace std;

int main()
{
	double monthlysalary = 0.0;
	double overtimepay = 0.0;
	double sss = 0.0;
	double philhealth = 0.0;
	double pagibig = 0.0;
	double totalexpenses = 0.0;
	double totalsalary = 0.0;
	double netpay = 0.0;
	
	cout << "Enter Monthly Salary: ";
	cin >> monthlysalary;
	cout << "Enter Overtime Pay: ";
	cin >> overtimepay;
	cout << "Enter SSS: ";
	cin >> sss;
	cout << "Enter Philhealth: ";
	cin >> philhealth;
	cout << "Enter Pagibig: ";
	cin >> pagibig;
	
totalsalary = monthlysalary + overtimepay;
totalexpenses = sss + philhealth + pagibig;
netpay = totalsalary - totalexpenses;

cout << "Net Pay" << netpay << endl;

system("pause");
return (0);


}
