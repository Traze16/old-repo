#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    cout<<"					Welcome "<<endl;
    cout<<"					Calculator"<<endl;
    cout<<endl<<endl<<endl;

	//declare variables
    double num1,num2;
    char operation,rerun;
 do
    {        
    cout<<" Please enter an operation (+,-,*,):  ; //Add Subtract Multiply or Divide
    cin>>operation ;
    cout<<endl<<endl;
     cout<<" Please enter two numbers to apply your requested operation("<<endl;//Enter Values
    cout<<operation<<"):"<<endl<<"1st num: ";
    cin>>num1;
    cout<<"2nd num: " ;
    cin>>num2;
    cout<<endl;

    switch (operation)
    {         
     case'+':            
             cout<<"The addition of two numbers ("<<num1<<","<<num2<<"):";
             cout<<num1+num2<<endl;
             break; 
     case'-':
             cout<<"The substraction of two numbers ("<<num1<<","<<num2<<"):";
             cout<<num1-num2<<endl;
             break;
      case'*':
             cout<<"The multiplication of two numbers ("<<num1<<","<<num2<<"):";
             cout<<num1*num2<<endl;
             break;
      case'/':
             cout<<"The division of two numbers ("<<num1<<","<<num2<<"):";
             if(num2==0)
             {
             cout<<"not valid"<<endl;
             }
             cout<<(num1/num2)<<endl;                    
           break;
      default:
              cout<<"Unknown Command - Error"<<endl;
      
           }
           
           cout << endl << endl;
 //The program will ask the user if want to continue or not          
           cout<<"Do you want to run the program again (Y/N)? : ";
           cin>>rerun;
           cout<<endl<<endl;
           }
           while(rerun=='y'||rerun=='Y');
           
   system("pause");
    return 0;
}
