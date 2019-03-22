#include <iostream>
using namespace std ;

// We Need To Call It By Reference To Put The New Values Directly In 
// The Variables ,, We Can't Return Two Things , But Can Adjust Alot :)

void Read2Number ( double &dNum1 , double &dNum2 ) 
{
	while(true)
	{
		dNum1 = dNum2 = 0 ;
		
		cout<<" Enter Two Integer Numbers :";
		cin>>dNum1>>dNum2;
			
		// Input validation
		if(cin.fail())
		{
			cout<<" Enter Correct Numbers Again "<<endl;
			cin.clear();
			cin.ignore(10000,'\n');
		}else
			break ;
	}
}

int ReadMenu ()
{
	int iChoice=0 ;	
	
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
		cout<<" Enter Correct Choice Again "<<endl;
		cin.clear();
		cin.ignore(10000,'\n');
		return ReadMenu();
	}
	else
		return iChoice ;
}

void RunCalculator()
{
	bool bFinished = false ;
	double dNum1=0,dNum2=0,dResult=0 ;
	int iChoice =0;	
	
	while(!bFinished)
	{
		Read2Number(dNum1,dNum2);
		iChoice = ReadMenu();
		
		switch (iChoice)
		{
		default:
			cout<<" Please...Enter A Choice from 1 to 5 "<<endl;
		}
		
		cout<<" The Result Is "<<dResult<<endl;
	}
}


bool sum( double dNum1 , double dNum2 , double &dResult )
{
	dResult = dNum1 + dNum2 ;
	return true ;
}
bool sub( double dNum1 , double dNum2 , double &dResult )
{
	dResult = dNum1 - dNum2 ;
	return true ;
}
bool mul( double dNum1 , double dNum2 , double &dResult )
{
	dResult = dNum1 * dNum2 ;
	return true ;
}
bool div( double dNum1 , double dNum2 , double &dResult )
{
	if( dNum2 == 0 )
	{
		cout<<" Can't Divide By Zero "<<endl;
		return false ;
	}
	else
	{
		dResult = dNum1 / dNum2 ;
		return true ;
	}
}

int main()
{
	cout<< "\t\t\t Welcome To The Calculator \n\n\n\n"<<endl; // Welcome Message
	RunCalculator();

	return 0;
}

//ممكن تخلي الفانكشن ترجع انها اشتغلت صح ولا لا وجوا تعدل في القيم والنتايج براحتها او ممكن تخليها ترجع نتيجة واحدة 

/*
 *  We Can Retry With 
 *		 Recursion ( To Get Out => Return Another Value)
 *		 Infinity Loop (To Get Out => break)
 *  =====================================================
 *  It's Better To Call By Reference :
 *
 * 		Call By Reference :
 * 		No New Memory To Create : Save Time , Memory
 *
 * 		Call By Value : 
 * 		 New Memory For The Copies Of The Values => More Time :( 
 */ 
	
