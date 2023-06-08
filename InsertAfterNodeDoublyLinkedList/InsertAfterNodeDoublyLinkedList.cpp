#include <iostream>
using namespace std;
class Node
{
public:
	int value;
	Node* next;
	Node* previuos;
};
void InserInTheBiganing( Node*& head , int value )
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
void InserAfter( Node*& head , int value )
{
	Node* newNode = new Node();
	newNode->value = value;
	if ( head == NULL )
	{
		head = newNode;
		newNode->next = NULL;
	}
}
void printList( Node* head )
{
	while ( head != NULL )
	{
		cout << head->value << " ";
		head = head->next;
	}
}
int main()
{
	std::cout << "Hello World!\n";
}