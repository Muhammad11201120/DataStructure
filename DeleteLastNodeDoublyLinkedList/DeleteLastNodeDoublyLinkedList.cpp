#include <iostream>
using namespace std;
class Node
{
public:
	int value;
	Node* next;
	Node* previous;
};
void InsertAtBeginning( Node*& head, int value )
{
	Node* newNode = new Node();
	newNode->value = value;
	newNode->next = head;
	newNode->previous = NULL;
	if (head != NULL)
	{
		head->previous = newNode;
	}
	head = newNode;
}
void DeleteLastNode( Node*& head )
{
	if (head == NULL)
	{
		return;
	}
	Node* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->previous->next = NULL;
	delete temp;
}
void printList( Node* head )
{
	while (head != NULL)
	{
		cout << head->value << " | ";
		head = head->next;
	}
}
int main()
{
	Node* head = NULL;
	InsertAtBeginning( head, 6 );
	InsertAtBeginning( head, 5 );
	InsertAtBeginning( head, 4 );
	InsertAtBeginning( head, 3 );
	InsertAtBeginning( head, 2 );
	InsertAtBeginning( head, 1 );
	cout << "List Befor Delete: \n\n";
	printList( head );
	DeleteLastNode( head );
	cout << "\n\nList After Delete First Node: \n\n";
	printList( head );
	system( "pause>0" );
}