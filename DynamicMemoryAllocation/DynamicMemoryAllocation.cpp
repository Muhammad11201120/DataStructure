#include <iostream>
using namespace std;
int main()
{
	int* ptrOne;
	float* ptrTwo;
	bool studentSuccess = true;

	if ( studentSuccess )
	{
		ptrOne = new int; // allocate memory for an integer
		ptrTwo = new float; // allocate memory for a float

		*ptrOne = 25; // assign 25 to the allocated memory
		*ptrTwo = 3.14159; // assign 3.14159 to the allocated memory

		cout << "grade one: \n";
		cout << *ptrOne << endl; // print the value of the allocated memory
		cout << "grade two: \n";
		cout << *ptrTwo << endl; // print the value of the allocated memory

		delete ptrOne; // free the allocated memory
		delete ptrTwo; // free the allocated memory

		cout << "Student passed!" << endl;
	}
	else
	{
		cout << "Student failed!" << endl;
	}
	return 0;
}
