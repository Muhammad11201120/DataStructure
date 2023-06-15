#include<iostream>
using namespace std;
class Node
{
public:
	int value;
	Node* next;
	Node* prev;
};
void InsertAtBeginning( Node*& head, int value )
{
	Node* newNode = new Node();
	newNode->value = value;
	newNode->next = head;
	newNode->prev = NULL;
	if (head != NULL)
	{
		head->prev = newNode;
	}
	head = newNode;
}

void DeleteFirstNode( Node*& head )
{

	if (head == NULL)
	{
		return;
	}
	Node* temp = head;
	head = head->next;
	head->prev = NULL;
	delete temp;
}
void printList( Node* head )
{
	while (head != NULL)
	{
		cout << head->value << " ";
		head = head->next;
	}
}
int main()
{
	Node* head = NULL;
	InsertAtBeginning( head, 3 );
	InsertAtBeginning( head, 2 );
	InsertAtBeginning( head, 1 );
	cout << "List Befor Delete: \n\n";
	printList( head );
	DeleteFirstNode( head );
	cout << "\n\nList After Delete First Node: \n\n";
	printList( head );
	system( "pause>0" );
}
