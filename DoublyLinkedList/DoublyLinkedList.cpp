#include <iostream>
using namespace std;
class Node
{
public:
	int value;
	Node* next;
	Node* previous;
};
int main()
{
	//Create the nodes
	Node* head = NULL;
	Node* one = NULL;
	Node* two = NULL;
	Node* three = NULL;
	//Allocate them in the heap
	one = new Node();
	two = new Node();
	three = new Node();
	//Assign values to them
	one->value = 1;
	two->value = 2;
	three->value = 3;
	//Connect them
	one->previous = NULL;
	one->next = two;
	//Connect them
	two->previous = one;
	two->next = three;
	//Connect them
	three->previous = two;
	three->next = NULL;
	//Assign the head
	head = one;
	//Print the list
	while ( head != NULL )
	{
		cout << head->value << " ";
		head = head->next;
	}
	return 0;
}
