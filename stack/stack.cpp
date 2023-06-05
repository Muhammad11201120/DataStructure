#include <iostream>
#include <stack>
using namespace std;
int main()
{
	cout << "Hello World!" << endl;
	stack<int> numbers;
	stack<int> numbersTwo;



	numbers.push( 1 );
	numbers.push( 2 );
	numbers.push( 3 );
	numbers.push( 4 );
	numbers.push( 5 );
	///////////fill second stack
	numbersTwo.push( 10 );
	numbersTwo.push( 20 );
	numbersTwo.push( 30 );
	numbersTwo.push( 40 );
	numbersTwo.push( 50 );
	numbersTwo.push( 60 );
	//// swaping
	numbers.swap( numbersTwo );

	// looping through stack
	while ( !numbers.empty() )
	{
		cout << numbers.top() << endl;
		numbers.pop();
	}
	system( "pause" );
}