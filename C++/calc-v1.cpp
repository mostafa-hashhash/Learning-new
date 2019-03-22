#include <iostream>
using namespace std ;

int main()
{
	int iChoice=0 ;
	double dNum1=0,dNum2=0,dResult=0 ;
	
	// Welcome Message
	cout<< "\t\t\t Welcome To The Calculator \n\n\n\n"<<endl; 
	
	StartPoint :
	
	// READING 2 NUMBERS
	cout<<" Enter Two Integer Numbers :";
	cin>>dNum1>>dNum2;
		
	// Input validation
	if(cin.fail())
	{
		cout<<" Enter Correct Numbers Again "<<endl;
		cin.clear();
		cin.ignore(10000,'\n');
		goto StartPoint ;
	}

	ChoicePoint :

	// Reading The Option Number
	cout<<" Enter The Option number \n\t"
			" 1)for + \n\t"
			" 2)for - \n\t"
			" 3)for * \n\t"
			" 4)for / \n\t"
			""<<endl;

	cin>>iChoice ;

	// Validate The Choice
	if( cin.fail() || iChoice < 1 || iChoice > 5 )
	{
		cout<<" Enter Correct Choice Again Plz "<<endl;
		cin.clear();
		cin.ignore(10000,'\n');
		goto ChoicePoint ;
	}
	 
	// Calculating The Result

	switch (iChoice)
	{
	case 1 :
		dResult = dNum1 + dNum2 ;
		break ;
	case 2 :
		dResult = dNum1 - dNum2 ;
		break ;
	case 3 :
		dResult = dNum1 * dNum2 ;
		break ;
	case 4 :
		if( dNum2 == 0 ){
			cout<<" Can't Divide By Zero "<<endl; goto StartPoint ; break ;}
		else{
			dResult = dNum1 / dNum2 ; break ; }
	}

	cout<<" The Result Is "<<dResult<<endl;

	return 0;
}
