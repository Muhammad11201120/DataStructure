#include <iostream>
using namespace std;
struct stPerson
{
	string name;
	string age;
	string email;
	string adress;
};
int main()
{
	stPerson person;
	person.name = "Muhammed";
	person.age = "25";
	person.email = "muhammed@gmail.com";
	person.adress = "Egypt";

	stPerson* ptr = &person; // you can create a pointer to the structure

	ptr->name = "Salman"; // you can modify the value of the structure by using the pointer

	cout << ptr->name << endl; // you can access the value of the structure by using the pointer
	cout << ptr->age << endl;
	cout << ptr->email << endl;
	cout << ptr->adress << endl;
	cout << ptr->name << endl;
	return 0;
}

