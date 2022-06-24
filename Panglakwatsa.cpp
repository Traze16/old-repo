#include <iostream>
using namespace std;

int main()
{

	double baon = 0.0;
	double pamasahe = 0.0;
	double pagkain = 0.0;
	double gastos = 0.0;
	double panglakwatsa = 0.0;
	
	
	cout << "Enter binigay ni nanay: ";
	cin >> baon;
	cout << "Enter pamasahe sa jeep: ";
	cin >> pamasahe;
	cout << "Enter panglamon: ";
	cin >> pagkain;
	
	gastos = pamasahe + pagkain;
	panglakwatsa = baon - gastos;
	cout << "Ang natira ay  " << panglakwatsa << endl;
	system ("pause");
	return (0);
}
