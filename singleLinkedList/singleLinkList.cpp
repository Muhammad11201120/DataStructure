#include <iostream>
using namespace std;

class Node
{
public:
	int value;
	Node* next;
};

int main()
{
	// Create three nodes
	Node* head;
	Node* one = NULL;
	Node* two = NULL;
	Node* three = NULL;
	// Allocate them in the heap
	one = new Node();
	two = new Node();
	three = new Node();
	// Assign values to them
	one->value = 1;
	two->value = 2;
	three->value = 3;
	// Connect them
	one->next = two;
	two->next = three;
	three->next = NULL;
	// Print them
	head = one;
	while ( head != NULL )
	{
		cout << head->value << " ";
		head = head->next;
	}

	return 0;

}
