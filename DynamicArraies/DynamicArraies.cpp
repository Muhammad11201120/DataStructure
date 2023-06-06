#include <iostream>
using namespace std;
int main()
{
	int num = 0;
	cout << "Enter the number of students: ";
	cin >> num;

	float* ptr = new float[ num ]; // allocate memory for the array

	for ( short i = 0; i < num; i++ )
	{
		cout << "Enter the grade of student " << i + 1 << ": ";
		cin >> *( ptr + i );
	}
	cout << "\n\n";
	for ( short i = 0; i < num; i++ )
	{
		cout << "Studen Number: " << i + 1 << " is: ";
		cout << *( ptr + i ) << endl;
	}
	delete[] ptr; // free the allocated memory ( DON`T FORGET THIS LINE )
	return 0;
}