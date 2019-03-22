#include <iostream>
#include <assert.h>
#include <algorithm>

using namespace std ;

int SecMaxInArray ( int arr[] , int size );
int MaxInArray ( int arr[] , int size );
void ReverseInPlace(int arr[],int size);
void Test2ndMaxInArray () ;
void TestReverseInPlace ();

int main()
{
	int size = 17; 
	              
	int arr[size] = {1,7,4,9,2,0,8,65,65,76,8, 23 ,24,657,980,763,5764};
	
	cout<<"Maximum is >> "<<MaxInArray(arr,size)<<"\t||\t";
	
	cout<<"Second maximum is >> "<<SecMaxInArray(arr,size)<<endl;
	
	Test2ndMaxInArray();
	
	ReverseInPlace(arr,size);
	//TestReverseInPlace();
	
	return 0;
}

int MaxInArray ( int arr[] , int size )
	{
		int Max=0 ;
		for(int i = 0 ; size > i ; i++ )
			if( Max < arr[i] ) Max = arr[i]  ;
		return Max ;
	}

int SecMaxInArray ( int arr[] , int size )
{
	assert( size >= 2 ); //  => false ? assert crash the program 
	
	int Max=arr[0] , sMax=arr[1] ;
	
	if ( Max < sMax)
		swap(Max,sMax);
	
	for(int i = 2 ; size > i ; i++ ) // start from the 3th element as we have already sorted the first two 
	{
		if( Max < arr[i] )
		{
			sMax = Max ;
			Max = arr[i] ;
		}
		else if ( sMax < arr[i] )	sMax = arr[i] ;
		
	}
	
	return sMax ;
	
}

void Test2ndMaxInArray ()
{
	const int SIZE = 10 ;
	int arr[SIZE] ;
	for(int t=1 ; t <= 1000 ; t++ )
	{
		for( int i=0 ; i<SIZE ; i++) // i < size == i <= size-1 == i < 10 == i <= 9 ,,, i [ 0-9 ] / [ 1-10 ] 
			arr[i]= rand() % 20000 ;   // HERE : 0 - 199 ( 0 - num-1 ) //// range [ 0 - 32767 ]
		int ans = SecMaxInArray(arr,SIZE);
		sort(arr,arr+SIZE);
		int correct = arr[SIZE-2] ;
		assert(ans == correct);
		//cout<<t<<endl;
	}
	cout<<endl<<"Second Maximum Test is WORKING PERFECTLY "<<endl<<endl;
}

void ReverseInPlace(int arr[],int size)
{
	for( int i=0 ; i < size/2 ; i++ )
		swap(arr[i] , arr[size-i-1] );
	//cout<<"[[ ";
	for(int i=0 ; i< size ; i++)
		cout<<((i==0)?"[[ ":"")<<arr[i]<<((i==size-1)?" ]]":",");
	cout<<endl;
}


void TestReverseInPlace ()
{
	int Size = 7 , currSize; 
	int arr [Size] ;
	int cpy [Size] ;
	
	for(int n=2;n>0;n--)
	{
		for(int t=0 ; t<1000 ; t++)
		{
			for(int i=0; i< currSize ; i++)
				cpy[i] = arr[i] = rand() % 100 ;
				
			reverse(cpy,cpy + currSize);
			
			ReverseInPlace(arr,currSize);
			
			for(int i=0 ; i<currSize ; i++)
				assert(cpy[i] == arr[i] );
		}
		
		currSize-- ;
	}
	
	cout << " PERFECT REVERSE :) " << endl;
}
