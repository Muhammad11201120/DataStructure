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
	if ( current->next != NULL )
	{
		head = NULL;
		delete current;
	}
	while ( current->value != NULL )
	{
		previous = current;
		current = current->next;
	}
	previous->next = NULL;
	delete current;
}
void DeleteLastNode( Node*& head )
{
	Node* current = head;
	Node* previous = head;
	//if the list is empty
	if ( head == NULL )
	{
		return;
	}
	//if there is only one node in the list
	if ( current->next == NULL )
	{
		head = NULL;
		delete current;
	}
	//if there are more than one node in the list
	while ( current->next != NULL )
	{
		previous = current;
		current = current->next;
	}
	previous->next = NULL;
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
	insertInTheBiganing( head , 6 );
	insertInTheBiganing( head , 5 );
	insertInTheBiganing( head , 4 );
	insertInTheBiganing( head , 3 );
	insertInTheBiganing( head , 2 );
	insertInTheBiganing( head , 1 );
	DeleteLastNode( head );//it will delete 6
	DeleteLastNode( head );//it will delete 5
	printList( head );
	return 0;
}

