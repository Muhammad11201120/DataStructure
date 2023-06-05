#include <iostream>
using namespace std;
int main()
{
	int numbers[ 3 ][ 3 ];
	numbers[ 0 ][ 0 ] = 1;
	numbers[ 0 ][ 1 ] = 2;
	numbers[ 0 ][ 2 ] = 3;
	numbers[ 1 ][ 0 ] = 4;
	numbers[ 1 ][ 1 ] = 5;
	numbers[ 1 ][ 2 ] = 6;
	numbers[ 2 ][ 0 ] = 7;
	numbers[ 2 ][ 1 ] = 8;
	numbers[ 2 ][ 2 ] = 9;
	for ( short i = 0; i < 3; i++ )
	{
		cout << endl;
		for ( short j = 0; j < 3; j++ )
		{
			cout << numbers[ i ][ j ] << " ";
		}
	}
	system( "pause>0" );
}
