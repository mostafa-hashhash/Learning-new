#include <iostream> 
#include <cmath> 
using namespace std ;

long long a, b, c, r1, r2, D ;

int main()
{
	cout << "Enter The Coefficients of The Equation, \n" ;
	cout << " A  :  " ; cin >> a ;
	cout << " B  :  " ; cin >> b ;
	cout << " C  :  " ; cin >> c ;
	
	D = ( b * b ) - ( 4 * a * c );
	
	if( D < 0 )
	{
		cout << " Discriminant is Negative, and The Roots Will Be Imaginary Numbers " ;
		return 0; 
	}
	else
	{
		r1 =  ( - b + sqrt(D) ) / ( 2 * a ) ;
		r2 =  ( - b - sqrt(D) ) / ( 2 * a ) ;
		cout << " The Roots Are : " << r1 << " , " << r2 ;
	}
	
	
}

/* 
Enter The Coefficients of The Equation, 
 A  :  1
 B  :  0
 C  :  -16
 The Roots Are : 4 , -4
*/
