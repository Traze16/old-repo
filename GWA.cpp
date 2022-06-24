#include <iostream>
using namespace std;

int main()
{ 

		cout << "				      	Welcome" << endl;
		cout << "					Compute your GWA" << endl;
	
	char r;
	
	do {
	
	double Z;
	double a;
	double A;
	int unita;
	double b;
	double B;
	int unitb;
	double c;
	double C;
	int unitc;
	double d;
	double D;
	int unitd;
	double e;
	double E;
	int unite;
	double f;
	double F;
	int unitf;
	double g;
	double G;
	int unitg;
	double TU;
	double GWA;
	
	cout << "Input grade in 1st subj: "<< endl;
	cin >> a;
		cout << "How many units?: "<< endl;
	cin >> unita;
	cout << "Input grade in 2nd subj: "<< endl;
	cin >> b;
		cout << "How many units?: "<< endl;
	cin >> unitb;
	cout << "Input grade in 3rd subj: "<< endl;
	cin >> c;
		cout <<"How many units?: "<< endl;
	cin >> unitc;
	cout << "Input grade in 4th subj: "<< endl;
	cin >> d;
		cout << "How many units?: "<< endl;
	cin >> unitd;
	cout << "Input grade in 5th subj: "<< endl;
	cin >> e;
		cout << "How many units?: "<< endl;
	cin >> unite;
	cout << "Input grade in 6th subj: "<< endl;
	cin >> f;
		cout << "How many units?: "<< endl;
	cin >> unitf;
	cout << "Input grade in 7th subj: "<< endl;
	cin >> g;
		cout << "How many units?: "<< endl;
	cin >> unitg;

	A = a*unita;
	B = b*unitb;
	C = c*unitc;
	D = d*unitd;
	E = e*unite;
	F = f*unitf;
	G = g*unitg;
	
	Z = A+B+C+D+E+F+G;
	
	TU = unita+unitb+unitc+unitd+unite+unitf+unitg;
	
	GWA = Z/TU;


	cout << "Your GWA is: "<< GWA << endl;
	
	if (GWA == 1.00)
	{cout << "YOU ARE A GOD" << endl;
	} else if (GWA < 1.2 || GWA == 1.2 )
	{cout << "University President Scholarship" << endl;
	}else if (GWA < 1.4 || GWA== 1.4)
	{cout << "University Scholarship" << endl;
	}else if (GWA == 1.6 || GWA == 1.6)
	{cout << "College Scholarship" << endl;
	}else
	{ cout << "Unknown Error";
}


	system ("pause");
	cout << endl << endl;
	
	cout << "Do you want to run the program again? (Y/N): ";
	cin >> r;
	
	}
	while ( r == 'y'|| r == 'Y');

	
	system ("pause");
	return (0);
}
