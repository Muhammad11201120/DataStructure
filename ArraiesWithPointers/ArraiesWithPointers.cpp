#include <iostream>
using namespace std;
int main()
{
	int arr[ 5 ] = { 1 , 2 , 3 , 4 , 5 };
	int* ptr = arr;
	cout << "The first element is " << *( ptr ) << "\n";
	cout << "The second element is " << *( ptr + 1 ) << "\n";
	cout << "The third element is " << *( ptr + 2 ) << "\n";
	cout << "The fourth element is " << *( ptr + 3 ) << "\n";
	cout << "The fifth element is " << *( ptr + 4 ) << "\n";
	return 0;
}
