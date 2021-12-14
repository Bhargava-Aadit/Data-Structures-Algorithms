#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int data;
	Node* next;

	Node(int val)
	{
		data = val;
		next = NULL;
	}
};

// Driver Function
void addNode(Node* &head, int val)
{
	Node* n = new Node(val);
	if(head == NULL)
	{
		head = n;
		return;
	}
	Node* temp = head;
	while(temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = n;
}

Node* reverseList(Node* &head)
{
	Node* prevptr = NULL;
	Node* currptr = head;
	Node* nextptr;

	while(currptr != NULL)
	{
		nextptr = currptr->next;
		currptr->next = prevptr;
		prevptr = currptr;
		currptr = nextptr;
	}
	return prevptr;
}

void display(Node* head)
{
	Node* temp = head;
	if(head == NULL)
	{
		cout << "NULL" << endl;
	}
	while(temp != NULL)
	{
		cout << temp->data << "->";
		temp = temp->next;
	}
	cout << "NULL" << endl;
	return;
}

int main()
{
	Node* head = NULL;
	// Driver Code Start
	int size;
	cin >> size; // 5
	for(int i=1; i<=size; ++i)
	{
	    int x;
	    cin >> x; // 1 2 3 4 5
	    addNode(head, x);
	}
	// Driver Code End
	cout << "Before Reversing: " << endl;
	display(head);
	Node* newHead = reverseList(head);
	cout << "After Reversing: " << endl;
	display(newHead);
	return 0;
}
/*
Output:
Before Reversing: 
1->2->3->4->5->NULL
After Reversing: 
5->4->3->2->1->NULL
*/
