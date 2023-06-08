#include <iostream>
using namespace std;
class Node
{
public:
	int value;
	Node* next;
	Node* previous;
};
void insertInTheBiganing( Node*& head , int value )
{
	Node* newNode = new Node();
	newNode->value = value;
	if ( head == NULL )
	{
		head = newNode;
		newNode->next = NULL;
		newNode->previous = NULL;
	}
	else
	{
		newNode->next = head;
		newNode->previous = NULL;
		head->previous = newNode;
		head = newNode;
	}
}
int main()
{
	Node* head = NULL;
	insertInTheBiganing( head , 1 );
	insertInTheBiganing( head , 2 );
	insertInTheBiganing( head , 3 );
	insertInTheBiganing( head , 4 );

	while ( head != NULL )
	{
		cout << head->value << " ";
		head = head->next;
	}
	return 0;
}
