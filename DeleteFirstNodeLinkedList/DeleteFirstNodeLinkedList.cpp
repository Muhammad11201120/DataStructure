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
void DeleteFirstNode( Node*& head )
{
	Node* current = head;
	if ( head == NULL )
	{
		return;
	}

	head = current->next;
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
	DeleteFirstNode( head );//it will delete 1
	DeleteFirstNode( head );//it will delete 2
	printList( head );
	return 0;
}
