#include <iostream>
using namespace std;
class Node
{
public:
	int value;
	Node* next;
	Node* previuos;
};
void InsertInTheBeganing( Node*& head , int value )
{
	Node* newNode = new Node();
	newNode->value = value;
	if ( head == NULL )
	{
		head = newNode;
		newNode->next = NULL;
		newNode->previuos = NULL;
	}
	else
	{
		newNode->next = head;
		newNode->previuos = NULL;
		head->previuos = newNode;
		head = newNode;
	}
}
Node* FindNode( Node*& head , int value )
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
int main()
{
	Node* head = NULL;
	InsertInTheBeganing( head , 1 );
	InsertInTheBeganing( head , 2 );
	InsertInTheBeganing( head , 3 );
	InsertInTheBeganing( head , 4 );

	Node* one = FindNode( head , 6 );
	if ( one != NULL )
	{
		cout << "FOUND" << endl;
	}
	else
	{
		cout << "NOT FOUND" << endl;
	}
}