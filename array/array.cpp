// array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int numbers[ 5 ];
	numbers[ 0 ] = 1;
	numbers[ 1 ] = 2;
	numbers[ 2 ] = 3;
	numbers[ 3 ] = 4;
	numbers[ 4 ] = 5;
	for ( int i = 0; i < 5; i++ )
	{
		cout << numbers[ i ] << "\n";
	}
	system( "pause>0" );
}
