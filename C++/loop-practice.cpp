
#include <iostream>
using namespace std ;

int main()
{

	/*
	 PROBLEM 1 

	int c=0;
	
	for ( int i=1 ; i <= 100 ; ++i )
	{
		if( i%4 == 0 )
		{c++;cout<<c<<endl;}
		else if( i%6 == 0 && i%10 == 0 )
			{c++;cout<<c<<endl;}
	}
	
	cout<<c<<endl;

	*//////////////////////////////////////////////////
	
	/* PROBLEM 2 
		 
	 int x=0 , y=0 , c=0;
	 
	 
	for( x =1 ; x <=100 ; x++ )
	{
		y=70;
		
		if(x>=70)
			y=x+1;
		
		for(; y<= 200 ; y++)  // for( y = ( i>=70 ? i+1 : 70) ; y<=200 ; y++)
		{
			if((x+y)%7 == 0)
				c++;
		}
	}
	 
	cout<<c<<endl;
	
	*///////////////////////////////////////////////////
	
	// PROBLEM 3 
	 
	int ic=0;
	 
	for(int a=0 ; a <= 1000 ; a++)
	{
		for(int b=0 ; b <= 1000 ; b++)
		{
			for(int c=0 ; c <= 1000 ; c++)
			{
				/*
				 *		FPR SPEED :)
				 * 
				 *   int d = 100 - (a+b+c) ;
				 *  
				 *  if ( d < 100 && d >= 0 )
				 * 		ic++;
				 */
				 				
				for(int d=0 ; d <= 100 ; d++)
				{
					if( a+b+c+d == 100 )
						ic++ ;
				}
			}
		}
	}
	
	cout<<ic<<endl;	
	  
	return 0;
}

