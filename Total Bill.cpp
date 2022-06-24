#include <iostream>
using namespace std;
int main()
{

	int totalbill;
	int liquor	;
    double tipPercent=0.0;
	int totalnoliquor;
	int tip;
	cout << "Please enter total bill: ";
	cin >> totalbill;
    cout << "Please enter the liquor charge ";
    cin >> liquor;
    cout << "Please enter the tip percentage in decimal format: ";
    cin >> tipPercent;

totalnoliquor = totalbill - liquor;
tip = totalnoliquor * tipPercent;
cout << "Tip: $" << tip << endl ;

system("pause");
return 0;
}
