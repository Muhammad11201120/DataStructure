#include <iostream>
#include <queue>
using namespace std;
int main()
{
	cout << "Hello World!" << endl;
	queue<int> numbers;
	queue <int> numbers2;
	numbers.push( 1 );
	numbers.push( 2 );
	numbers.push( 3 );
	numbers.push( 4 );
	numbers.push( 5 );
	/////////// fill second queue
	numbers2.push( 10 );
	numbers2.push( 20 );
	numbers2.push( 30 );
	numbers2.push( 40 );
	numbers2.push( 50 );
	numbers2.push( 60 );
	//// swaping
	numbers.swap( numbers2 );
	cout << "\n size of queue: " << numbers.size() << endl;
	cout << "\n front of queue: " << numbers.front() << endl;
	cout << "\n back of queue: " << numbers.back() << endl;
	// looping through queue
	while ( !numbers.empty() )
	{
		cout << numbers.front() << endl;
		numbers.pop();
	}
	system( "pause" );
}