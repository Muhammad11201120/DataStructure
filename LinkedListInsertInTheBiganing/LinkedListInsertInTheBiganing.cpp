#include <iostream>
using namespace std;
class Node
{
public:
	int value;
	Node* next;

	void insertInTheBiganing( Node*& head , int value )
	{
		Node* newNode = new Node();
		newNode->value = value;
		newNode->next = head;
		//Move the head pointer to the new node
		head = newNode;
	}
	void printList( Node* head )
	{
		while ( head != NULL )
		{
			cout << head->value << "\n";
			head = head->next;
		}
	}
};
int main()
{
	Node* head;
	Node* one = NULL;

	one = new Node();
	one->insertInTheBiganing( head , 1 );
	one->insertInTheBiganing( head , 2 );
	one->insertInTheBiganing( head , 3 );
	one->printList( head );
	system( "pause>0" );
}