#include <iostream>
using namespace std;
class Node
{
public:
	int value;
	Node* next;
};
void InsertInTheBiganing( Node*& head , int value )
{
	Node* newNode = new Node();
	newNode->value = value;
	newNode->next = head;
	//Move the head pointer to the new node
	head = newNode;
}
Node* FindElement( Node* head , int value )
{
	while ( head != NULL )
	{
		if ( head->value == value )
		{

			return head;
		}
		head = head->next;
	}
	return NULL;
}
void PrintList( Node* head )
{
	while ( head != NULL )
	{
		cout << head->value << "\n";
		head = head->next;
	}
}
void InserAfter( Node* prevNode , int value )
{
	if ( prevNode == NULL )
	{
		cout << "The given previous node cannot be NULL";
		return;
	}
	Node* newNode = new Node();
	newNode->value = value;
	newNode->next = prevNode->next;
	prevNode->next = newNode;
}

int main()
{
	Node* head = NULL;

	InsertInTheBiganing( head , 1 );
	InsertInTheBiganing( head , 2 );
	InsertInTheBiganing( head , 3 );


	Node* two = FindElement( head , 3 );
	InserAfter( two , 5 );
	PrintList( head );
	return 0;
}
