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
	newNode->value = value;
	newNode->next = NULL;
	if ( head == NULL )
	{
		newNode->previous = NULL;
		head = newNode;
		return;
	}
	if ( head->next != NULL )
	{
		Node* current = head;
		while ( current->next != NULL )
		{
			current = current->next;
		}
		current->next = newNode;
		newNode->previous = current;
	}
}
void PrintNodeDetails( Node* head )
{

	if ( head->previous != NULL )
		cout << head->previous->value;
	else
		cout << "NULL";

	cout << " <--> " << head->value << " <--> ";

	if ( head->next != NULL )
		cout << head->next->value << "\n";
	else
		cout << "NULL";

}

// Print the linked list
void PrintListDetails( Node* head )

{
	cout << "\n\n";
	while ( head != NULL )
	{
		PrintNodeDetails( head );
		head = head->next;
	}
}


// Print the linked list
void PrintList( Node* head )

{
	cout << "NULL <--> ";
	while ( head != NULL )
	{
		cout << head->value << " <--> ";
		head = head->next;
	}
	cout << "NULL";

}
int main()
{
	Node* head = NULL;
	InsertAtBeganing( head , 5 );
	InsertAtBeganing( head , 4 );
	InsertAtBeganing( head , 3 );
	InsertAtBeganing( head , 2 );
	InsertAtBeganing( head , 1 );

	cout << "\nLinked List Contenet:\n";
	PrintList( head );
	PrintListDetails( head );
	InsertAtEnd( head , 500 );

	cout << "\n\n\nLinked List Contenet after InsertAfter:\n";
	PrintList( head );
	PrintListDetails( head );
}

