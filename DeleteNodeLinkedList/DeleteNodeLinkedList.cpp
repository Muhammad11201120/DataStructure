#include <iostream>
using namespace std;
class Node
{
public:
	int value;
	Node* next;
};
void insertInTheBiganing( Node*& head , int value )
{
	Node* newNode = new Node();
	newNode->value = value;
	newNode->next = head;
	//Move the head pointer to the new node
	head = newNode;
}
void insertAtTheEnd( Node*& head , int value )
{
	Node* newNode = new Node();
	newNode->value = value;
	newNode->next = NULL;

	if ( head == NULL )
	{
		head = newNode;
	}
	else
	{
		Node* lastNode = head;
		while ( lastNode->next != NULL )
		{
			lastNode = lastNode->next;
		}
		lastNode->next = newNode;
	}

}
void DeleteNode( Node*& head , int value )
{
	Node* current = head;
	Node* previous = head;

	if ( head == NULL )
	{
		return;
	}

	if ( current->value == value )
	{
		head = current->next;
		delete current;
	}
	while ( current != NULL && current->value != value )
	{
		previous = current;
		current = current->next;
	}
	if ( current == NULL )
	{
		return;
	}

	previous->next = current->next;
	delete current;
}
void printList( Node* head )
{
	while ( head != NULL )
	{
		cout << head->value << "\n";
		head = head->next;
	}
}
int main()
{
	Node* head = NULL;
	insertInTheBiganing( head , 1 );
	insertInTheBiganing( head , 2 );
	insertInTheBiganing( head , 3 );
	insertInTheBiganing( head , 4 );
	insertInTheBiganing( head , 5 );

	DeleteNode( head , 4 );
	printList( head );
	return 0;
}