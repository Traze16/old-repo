#include <iostream>
using namespace std;

int main()
{
	
	cout<<"					Welcome "<<endl;
    cout<<"					BMI Calculator"<<endl;
    cout<<endl<<endl<<endl;
	int height = 0;
	int weight = 0;
	int BMI = 0;
	char rerun;
do {
	cout << "Enter your height in inches: ";
	cin >> height;
	cout << "Enter your weight in pounds: ";
	cin >> weight;
	
	BMI = (weight*703)/(height*height);
	
	if (BMI< 18.5)
	{cout << "You are underweight";
	} else if (BMI< 18.5 || BMI == 24.9 )
	{cout << "You BMI is Average";
	}else if (BMI < 25 || BMI==29.9)
	{cout << "You are Overweight";
	}else if (BMI==30 || BMI>30)
	{cout << "You are Obese";
	}else
	{ cout << "Unknown Error";
	}
	cout << endl << endl;
	
		cout<<"Do you want to run this program again? (y/n):  ";
		cin>>rerun;
			
		}

	while (rerun == 'y' || rerun == 'Y');
	
	system ("pause");
	return (0);
	
}

