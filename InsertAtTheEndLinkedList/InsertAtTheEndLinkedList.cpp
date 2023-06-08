#include <iostream>
using namespace std;
class Node
{
public:
	int vlaue;
	Node* next;
};
void insertAtTheEnd( Node*& head , int value )
{
	Node* newNode = new Node();
	newNode->vlaue = value;
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
void printList( Node* head )
{
	while ( head != NULL )
	{
		cout << head->vlaue << " ";
		head = head->next;
	}
}
int main()
{
	// Create three nodes
	Node* head = NULL;

	// insert at the end
	insertAtTheEnd( head , 1 );
	insertAtTheEnd( head , 2 );
	insertAtTheEnd( head , 3 );
	insertAtTheEnd( head , 4 );
	//print list
	printList( head );

	return 0;

}
