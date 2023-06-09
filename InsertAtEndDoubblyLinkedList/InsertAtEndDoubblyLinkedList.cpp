#include <iostream>
using namespace std;
class Node
{
public:
	int value;
	Node* previous;
	Node* next;
};
void FindNode( Node* head , int value )
{
	while ( head != NULL )
	{
		if ( head->value == value )
		{
			cout << "Found" << endl;
			return;
		}
		head = head->next;
	}
	cout << "Not Found" << endl;
}
void InsertAtBeganing( Node*& head , int value )
{
	Node* newNode = new Node();
	newNode->value = value;
	newNode->next = head;
	newNode->previous = NULL;
	if ( head != NULL )
	{
		head->previous = newNode;
	}
	head = newNode;
}
void InsertAtEnd( Node* head , int value )
{
	Node* newNode = new Node();
	Node* prev = new
}
int main()
{
	std::cout << "Hello World!\n";
}

